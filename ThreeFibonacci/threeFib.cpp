class Solution {
public:
    // 100% 49%
    int tribonacci(int n) {
        int a=0,b=1,c=1,tmp1=a,tmp2=b;
        if(n>2){
            for(int i=2;i<n;i++){
                tmp1=a;
                a=b;
                tmp2=b;
                b=c;
                c+=tmp2+tmp1;
            }
            
            return c;
        } 
        if(n==0) return 0;
        return 1;
        //Slow solution because i use an array
        /*vector<int> x= {0,1,1};
        if(n>2){
            for(int i=2; i<n;i++){
                x.push_back(x[i]+x[i-1]+x[i-2]);
            }
        }
        return x[n];*/
    }
};