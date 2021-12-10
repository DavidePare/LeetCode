class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /**
        Runtime: 4 ms, faster than 97.04% of C++ online submissions for Single Number II.
        Memory Usage: 9.6 MB, less than 51.08% of C++ online submissions for Single Number II.
        Runtime: 8 ms, faster than 77.05% of C++ online submissions for Single Number II.
        Memory Usage: 9.4 MB, less than 83.77% of C++ online submissions for Single Number II.
        Runtime: 4 ms, faster than 97.04% of C++ online submissions for Single Number II.
        Memory Usage: 9.4 MB, less than 99.25% of C++ online submissions for Single Number II.
        */
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i){
            if(i+1>=nums.size()) return nums[i];
            if(nums[i]==nums[i+1]) i+=3;
            else return nums[i];
        }
        return 0;
    }
};
