// 5% 76%
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,y=s.length();
        for(int x=0; x<y;x++){
            s[x]= tolower(s[x]);
            if((s[x] <'a' || s[x] > 'z') && (s[x]<'0' || s[x]>'9')) {
                s.erase(s.begin()+x);
                x--,y--;
            }
        }
        y--;
        while(i<y){
            if(s[i]==s[y]) {
                i++,y--;
            }
            else return false;
        }
        return true;
    }
};