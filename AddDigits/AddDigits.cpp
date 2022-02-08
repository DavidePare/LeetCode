// 53,90% 95%
class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        if(num==0) return 0;
        while(num/10!=0){
            while(num > 0){
                sum+=num%10;
                num=(num/10);
            }
            num=sum;
            sum=0;
        }
        return num;
    }
};