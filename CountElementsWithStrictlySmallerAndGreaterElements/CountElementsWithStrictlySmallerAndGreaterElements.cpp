// 74 % , 98%
class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size()<=2) return 0;
        sort(nums.begin(),nums.end());
        int i,j,cont=0;
        for(i=(nums.size()/2)-1; i>=0;i--){
            if(nums[i]== nums[0]) break;
            else if(nums[i]!=nums[nums.size()-1]) cont++;
        }
        for(j=(nums.size()/2); j<nums.size();j++){
            if(nums[j]== nums[nums.size()-1]) break;
            else if(nums[j]!=nums[0]) cont++;
        }
        return cont;
    }
};