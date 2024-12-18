#include<bits/stdc++.h>
using namespace std;
class Solution {
    int reverse(int num){
            int r = 0;
            while(num>0){
                r *= 10;
                r += (num%10);
                num /= 10;
            }
            return r;
        }
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            int x = reverse(nums[i]);
            st.insert(x);
        }
        return st.size();
    }
};
int main(){
    Solution s;
    vector<int> v{1,13,10,12,31};
    cout<<s.countDistinctIntegers(v);
}