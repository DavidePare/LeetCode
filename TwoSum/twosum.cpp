class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> value;
        for(int i=0; i< nums.size(); i++){
            if(value.find(target-nums[i]) == value.end()){
                value.insert({nums.at(i),i});
            }
            else{
                return {value.at(target-nums[i]),i};
            } 
        }
        return {0,0};
    }
    
};