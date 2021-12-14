class Solution {
public:
    // 11% and 56%
    void moveZeroes(vector<int>& nums) {
        int cont=0;
        for(int i=0;i< nums.size()-1;i++){
            if(nums[i]==0){
                cont++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        for (int i=0; i<cont;i++){                                
			nums.push_back(0);
        }
    }
};