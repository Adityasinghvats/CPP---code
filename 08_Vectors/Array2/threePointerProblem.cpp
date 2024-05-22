class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Input 2 0 2 1 1 0
        // Output 0 0 1 1 2 2 
        int low = 0,mid = 0, high = nums.size()-1;
        // One pass
        while(mid<=high){
            if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
            else if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;mid++; 
            }
            else if(nums[mid]==1){
                mid++;
            }
        }
    }
};