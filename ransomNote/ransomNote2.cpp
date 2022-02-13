//More efficient Solution 98%
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()> magazine.size()) return false;
        vector<int> x(26,0);
        for(char c : magazine){
            x[c-'a']++;
        }
        for(char c : ransomNote){
            if(x[c-'a'] ==0) return false;
            else x[c-'a']--;
        }
        return true;
    }
};