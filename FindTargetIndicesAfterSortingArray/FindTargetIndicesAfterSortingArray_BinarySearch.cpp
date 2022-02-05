// I would like to implement this algorithm with binary search for exercises it
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        vector<int> index;
        if(nums.size() == 1){
            if(nums[0]==target) index.push_back(0);
            return index;
        } 
        sort(nums.begin(),nums.end());       
        while (l <= h) {
            int mid = l+ (h-l) / 2;
            if(mid > h) break;
            if (nums[mid]==target) {
                int x=mid;
                while( x > 0 ){
                    if(nums[mid] == nums[x-1]) index.push_back(--x);
                    else break;
                }
                index.push_back(mid);
                while( mid<nums.size()-1){
                    if(nums[mid] == nums[mid+1]) index.push_back(++mid);
                    else break;
                }
                break;
            }
            if(nums[mid]> target){
                h=mid -1;
            }else {
                l = mid+1;
            }
        }
        sort(index.begin(),index.end());
        return index;
    }
};