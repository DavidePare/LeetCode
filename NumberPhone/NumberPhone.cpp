// 100% 9.54%
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        for(int i=0; i<digits.length();i++){
            switch(digits[i]){
                case '2':
                    res=addElement(res,{"a","b","c"});
                    break;
                case '3':
                    res=addElement(res,{"d","e","f"});
                    break;
                case '4':
                    res=addElement(res,{"g","h","i"});
                    break;
                case '5':
                    res=addElement(res,{"j","k","l"});
                    break;
                case '6':
                    res=addElement(res,{"m","n","o"});

                    break;
                case '7':
                    res=addElement(res,{"p","q","r","s"});
                    break;
                case '8':
                    res=addElement(res,{"t","u","v"});
                    break;
                case '9':
                    res=addElement(res,{"w","x","y","z"});
                    break;
            }
        }
        return res;
    }
    vector<string> addElement(vector<string> res, vector<string> letters){
        int start=res.size();
        vector<string> result;
        for(auto a: letters){
            for(int i=0; i< res.size();i++){
               result.push_back(res[i]+a);
            }
        }
        if(res.empty()) for(auto a: letters) result.push_back(a);
        return result;
    }
};