/*
You are given an integer array nums of length n, where nums is a permutation of the numbers in the range [1, n].

A XOR triplet is defined as the XOR of three elements nums[i] XOR nums[j] XOR nums[k] where i <= j <= k.

Return the number of unique XOR triplet values from all possible triplets (i, j, k).

A permutation is a rearrangement of all the elements of a set.
*/
/*
Input: nums = [1,2]

Output: 2

Explanation:

The possible XOR triplet values are:

(0, 0, 0) → 1 XOR 1 XOR 1 = 1
(0, 0, 1) → 1 XOR 1 XOR 2 = 2
(0, 1, 1) → 1 XOR 2 XOR 2 = 1
(1, 1, 1) → 2 XOR 2 XOR 2 = 2
The unique XOR values are {1, 2}, so the output is 2.

Example 2:

Input: nums = [3,1,2]

Output: 4

Explanation:

The possible XOR triplet values include:

(0, 0, 0) → 3 XOR 3 XOR 3 = 3
(0, 0, 1) → 3 XOR 3 XOR 1 = 1
(0, 0, 2) → 3 XOR 3 XOR 2 = 2
(0, 1, 2) → 3 XOR 1 XOR 2 = 0
The unique XOR values are {0, 1, 2, 3}, so the output is 4.

 

Constraints:

1 <= n == nums.length <= 105
1 <= nums[i] <= n
nums is a permutation of integers from 1 to n.
C++	
*/
class Solution {

public:

    void s(int i, int j, int k, vector<int>& nums, unordered_set<int>& st, int len){

        if(i > len || j > len || k > len){

            return;

        }

        int num = nums[i]^nums[j]^nums[k];

        st.insert(num);

        s(i+1, j, k, nums, st, len);

        s(i, j+1, k, nums, st, len);

        s(i, j, k+1, nums, st, len);

    }

    int uniqueXorTriplets(vector<int>& nums) {

        unordered_set<int> st;

        int len = nums.size() - 1;
        int i = 0, j = 0, k = 0;
        s(i, j, k, nums, st, len);

        return st.size();
    }

};
/*
  Custom Testcase
[1,2]
[3,1,2]
 How to create a testcase
Submission Result: Time Limit Exceeded 
Last executed input:
[5,7,2,1,4,6,3]
*/