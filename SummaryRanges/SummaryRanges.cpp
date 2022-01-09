// 100% --94%
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> result;
        if(nums.empty()) return result;
        int start=nums[0],cont=1;
        for(int i=1; i<nums.size();i++){
            if(start+cont == nums[i])    cont++;
            else{
                if(cont==1){
                    result.push_back(to_string(start));
                }else{
                    result.push_back(to_string(start)+"->"+to_string(start+cont-1));
                }
                
                start=nums[i];
                cont=1;
            }
        }
        if(cont==1) result.push_back(to_string(start));
        else result.push_back(to_string(start)+"->"+to_string(start-1+cont));
        return result;
    }
};