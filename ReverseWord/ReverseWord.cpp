class Solution {
public:
    string reverseWords(string s) {
        string result="";
        string word="";
        for(auto a: s){
            if(!isspace(a) ) {
                word+=a;
                
            }else{
                reverse(word.begin(), word.end());
                result+=word.append(" ");
                word="";
            }
        }
        reverse(word.begin(), word.end());
        result.append(word);
        return result;
      
    }
};