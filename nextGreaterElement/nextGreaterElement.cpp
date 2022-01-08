class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> el;
        for(auto n : nums1){
            int flag=0;
            for(int i=0;i<nums2.size();i++){
                if(n==nums2[i]){
                    flag=1;
                }
                if(flag==1 && n<nums2[i]){ 
                    el.push_back(nums2[i]);
                    flag=2;
                    break;
                }
            }
            if(flag!=2) el.push_back(-1);
        }
        return el;
    }
};