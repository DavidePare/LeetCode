//97% 50%
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res=duration;
        for(int i=1; i< timeSeries.size();i++){
            if(timeSeries[i-1]+duration >= timeSeries[i]){
                res+=duration+timeSeries[i]-(timeSeries[i-1]+duration);
            }
            else res+=duration;
        }
        return res;
    }
};