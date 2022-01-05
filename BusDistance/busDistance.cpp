// 5% 81%
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int a, int b) {
        int d1=0,d2=0,app;
        if(a > b){
            app=a;
            a=b;
            b=app;
        }
        for(int i=a; i<b;i++){
            d1+=distance[i];
        }

        while(a > 0){
            d2+=distance[--a]; 
            if(d2 > d1) return d1;
            
        };
        while(b < distance.size()){
            d2+=distance[b++];
            if(d2 > d1) return d1;
        };
        
        return d2;
    }
};