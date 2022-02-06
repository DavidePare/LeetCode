// 100% - 89%
class Solution {
public:
    bool isThree(int n) {
        int cont=2;
        if(n<=2) return false;
        for(int i = 2; i <= n / 2; i++){
            if(n % i == 0) cont++;
        }
        return cont==3 ? true : false;
    }
};