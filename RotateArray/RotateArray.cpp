class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //FIRST SOLUTION SHIFT too time
      /*  int app;
        k=k%nums.size();
        cout<<k;
        if(nums.size()!= 1){
            while(k--){
                for(int i=nums.size()-1; i>0; i--){
                    app= nums[i-1];
                    nums[i-1]= nums[i];
                    nums[i]=app; 
                }
            }
        }*/
        //2nd solution O(N) and O(1)
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(), nums.end());

    }
};