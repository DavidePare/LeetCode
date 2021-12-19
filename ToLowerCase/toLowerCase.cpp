class Solution {
public:
    // 100% and 98%
    string toLowerCase(string s) {
        for(int i=0; i< s.length();i++){
            if(s[i] >= 65 && s[i] <= 90) s[i]+=32;
        }
        return s;
    }
};