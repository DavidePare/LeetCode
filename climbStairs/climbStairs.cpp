// 100% --81%
class Solution {
public:
    int climbStairs(int n) {
        int x=1,y=0;
        for(int i=1; i<n;i++){
            if(x<y)  x=x+y ;
            else y=x+y;
        }
        return x+y;
    }
};
