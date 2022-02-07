class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cont=0;
        for(string s : patterns){
            if(word.find(s) != string::npos) cont++;
        }
        return cont;
    }
};

