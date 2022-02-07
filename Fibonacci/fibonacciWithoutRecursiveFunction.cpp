class Solution {
public:
    int fib(int n){
        int v=1,j=1,app;
        for(int i=1;i<n-1;i++) {
            app=v;
            v=v+j;
            j=app;
        }
        return n==0 ? 0 : v;
    }
};