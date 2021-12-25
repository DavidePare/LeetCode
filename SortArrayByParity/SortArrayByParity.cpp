// 81,84% -- 50,92%
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i,j=0,parityElem;
        for(i=0; i< nums.size();i++){
            if((nums[i]%2)==0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        return nums;
    }
};