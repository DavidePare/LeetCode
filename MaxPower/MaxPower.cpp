class Solution {
public:
    int maxPower(string s) {
        int max=1,cont=1;
        char l=s[0];
        for(int i=1; i<s.length();i++){
            if(l==s[i]){
                cont++;
                if(cont > max) max=cont;
            }else{
                cont=1; 
                l=s[i];
            } 

        }
        return max;
    }
};