//100.00% -- 88.41%
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cont=0;
        for(int i=s.length()-1; i>=0;i--){
            if(s[i]==' ' && cont==0) continue;
            else{
                if(s[i]==' ') return cont;
                else cont++;
            }
        }
        return cont;
    }
};