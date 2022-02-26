class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        for(int i=0 ; i<intervals.size();i++){
            for(int j=0 ; j<intervals.size();j++){
                if(intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1] && i!=j){
                    intervals.erase(intervals.begin()+i);
                    i--;
                    break;
                }
            }
        }
        return intervals.size();
    }
};