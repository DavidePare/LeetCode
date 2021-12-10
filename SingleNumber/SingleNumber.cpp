class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //5.08 fater and 17MB memory usage
        int i=0;
        sort( nums.begin(), nums.end() );
        
        while(nums.size()!=1){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i+1);
                nums.erase(nums.begin()+i);
            }
            else{
                return nums[i];
            } 
        }
        return nums[0];
        /*
			The Best Solution it with XOR. 88% better than others .Solution in c++:
			class Solution {
			public:
				int singleNumber(vector<int>& nums) {
					for(int i=1; i<nums.size();i++){
						nums[0]^=nums[i];
					}
					return nums[0];
				}
			};
		
		
		*/
    }
};
