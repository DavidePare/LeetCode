//100% - 99% utilizza pila
class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        if(s.length()%2!=0) return false;
        for(int i=0; i<s.length();i++){
            if (!v.empty()){
                if(s[i]==')' && v[v.size()-1] =='(') v.pop_back();
                else if(s[i]==']' && v[v.size()-1] =='[') v.pop_back(); 
                else if(s[i]=='}' && v[v.size()-1] =='{') v.pop_back();
                else if(s[i]=='}' || s[i]==')' || s[i]==']' ) return false;
            }else{ 
                if(s[i]==')' || s[i]==']' || s[i]=='}'){
                    return false;
                }
            }
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') v.push_back(s[i]);
        }
        return v.size()==0;
    }
};