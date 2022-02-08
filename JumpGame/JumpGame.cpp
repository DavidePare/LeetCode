//JumpGame 64% 50%
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jmp=nums[0],pos=0;
        for(int i=1; i<nums.size();i++){
            if((jmp+pos-i) < 0) return false;
            if((jmp+pos-i)<=nums[i]){
                jmp=nums[i];
                pos=i;
            }
        }
        return true;
    }
};