class Solution {
public:
    int search(vector<int>& nums, int target) {
        // divide at impera solution
        int start=0, ending=nums.size()-1, mid;
        while(start<=ending){
            mid= (start+ending)/2;
            if(target==nums[mid]) return mid;
            if(target<nums[mid]) ending=mid-1;
            else start=mid+1;
        }
        return -1;
    }
};