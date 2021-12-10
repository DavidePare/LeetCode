class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 12--24 ms and 19.5 --19.7
        sort(nums.begin(), nums.end()); //ordina l'array 
        int count = 1, temp = nums[0], element;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(temp==nums[i]){
                count++;
                if(count> (n/2)) return temp;
            }
            else{
                count = 1;
                temp = nums[i];
            }

        }
        return temp;
    }
};