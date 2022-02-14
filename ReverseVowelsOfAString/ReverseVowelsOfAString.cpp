// 51% 84%
class Solution {
public:
    
    bool checklow(char c){
        return c== 'a' || c== 'e' || c== 'o' || c== 'i' || c== 'u';
    }
    bool checkUpper(char c){
         return c== 'A' || c== 'E' || c== 'O' || c== 'I' || c== 'U';
    }
    
    string reverseVowels(string s) {
        int i=0, n=s.size()-1;
        while(i<n){
            if((checkUpper(s[i]) || checklow(s[i])) && (checkUpper(s[n]) || checklow(s[n]))){
                swap(s[i],s[n]);
                i++;
                n--;
            }
            if(!(checkUpper(s[i]) || checklow(s[i]))){
                i++;
            }
            if(!(checkUpper(s[n]) || checklow(s[n]))){
                n--;
            }
        }
        return s;
    }
};