class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cont=0;
        if(ransomNote.size()> magazine.size()) return false;
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        for(int i=0; i<ransomNote.size();i++){
            for(int j=0; j<magazine.size();j++){
                if(ransomNote[i]==magazine[j]){
                    cont++;
                    magazine.erase(magazine.begin()+j);
                    break;
                }
                if(ransomNote[i]<magazine[j]) return false;
            }
        }
        return cont==ransomNote.size();
    }
};