class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int a=0,b=0;
        while(m>a || n>b){
            if(a==m){
                for(; b<n;b++) result.push_back(nums2[b]);
                break;
            }    
            if(b==n){
                for(; a<m;a++) result.push_back(nums1[a]);
                break;
            }   
            
            if(nums1[a]>= nums2[b]){
                result.push_back(nums2[b]);
                b++;
            }
            else{
                result.push_back(nums1[a]);
                a++;
            }
        }
        nums1=result;
        
    }
};