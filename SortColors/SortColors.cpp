class Solution {
public:
    // Bubble Sort
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i; j<nums.size();j++){
                if(nums[j]< nums[i]) swap(nums[j],nums[i]);
            }
        }
    }
}