// 100% --15%
class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        if(s.length()!= goal.length()) return false;
        for(int i=0;i<s.length();i++){
            s=s.substr(1,s.length()) + s.substr(0,1);
            if(s.compare(goal) ==0) return true;
        }
        return false;
    }
};