// 95% - 99%
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'48')%2!=0) return num;
            else num.pop_back();
            //num.resize(num.size() - 1);
            //num.erare(num.size() - 1);
        }
        return "";
    }
};