class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()> nums2.size())
            return res(nums2,nums1);
        else return res(nums1,nums2);
        
    }
    
    vector<int> res(vector<int>& a, vector<int>& b){
        map<int,int> x;
        vector<int> resultVector;
        for(int value : a){
            if(x.find(value) != x.end()) x.insert(pair<int,int>(value,1));
            else x[value]++;
        }
        for(int value: b){
            if(x.find(value) != x.end()){
                if(x[value] >0){
                    x[value]--;
                    resultVector.push_back(value);
                }
            }
        }
        return resultVector;
        
        
    }
};