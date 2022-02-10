// ContainsDuplicateII 50% -50%
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> m;
        for(int b=0;b<nums.size();b++){
            if (m.find(nums[b]) != m.end()){
                if(abs(m[nums[b]]-b)<=k) return true;
                else  m[nums[b]]=b;
            }else{
                m.insert(pair<int,int>(nums[b],b));
            }
        }
        return false;
    }
};