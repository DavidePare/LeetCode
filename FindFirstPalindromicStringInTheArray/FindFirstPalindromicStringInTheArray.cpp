class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool flag=true;
        // i would like to try the solution with xor
        for(int i=0; i<words.size();i++){
            flag=true;
            for(int j=0;(j<words[i].size()/2) && flag;j++){
                if(words[i][j] != words[i][words[i].size()-j-1] ) flag=false;
            }
            if(flag) return words[i];
        }
        return "";
    }
    
};