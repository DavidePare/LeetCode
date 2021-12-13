class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0, ending=nums.size()-1, mid;
        while(start<=ending){
            mid= (start + ending)/2;
            if(target==nums[mid]) return mid;
            if(target>nums[mid]) start =mid+1;
            else ending= mid-1;
        }
        return start;
    }
};