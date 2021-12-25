// 81,58% -- 21%
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cont=0,max=0;
        for(int i=0;i< nums.size();i++){
            if(nums[i]==1){
                cont++;
                if(max <cont) max=cont;
            }
            else cont=0;
        }
        return max;
    }
};