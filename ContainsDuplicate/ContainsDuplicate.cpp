class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Correct solution but not the best in my opionion 
        /*sort(nums.begin(),nums.end());
        int app=nums[0];
        for(int i=1;i< nums.size();i++){
            if(app==nums[i]) return true;
            else app=nums[i];
        }
        return false;*/
        // Same time solution :/
     /*   map<int,int> x;
        for(int i=0;i< nums.size();i++){
            if(x.count(nums[i])) return true;
            else x.insert(pair<int,int> (nums[i],1));
        }
        return false;*/
        /*Another solution 
        unordered_set<int>us(nums.begin(), nums.end());
        return us.size() != nums.size();*/
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i >0 ;i--){
            if(nums[i-1]==nums[i]) return true;
        }
        return false;
    }
};