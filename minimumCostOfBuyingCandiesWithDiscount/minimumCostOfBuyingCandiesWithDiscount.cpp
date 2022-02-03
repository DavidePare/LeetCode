class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int tot=0;
        sort(cost.begin(),cost.end());
        for(int i=cost.size()-1; i>=0;i-=3){
            if(i-1>=0) tot+=cost[i]+cost[i-1];
            else tot+=cost[i];
        }
        return tot;
    }
};