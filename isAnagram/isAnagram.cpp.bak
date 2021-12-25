class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> anag;
        if(s.length()!= t.length()) return false;
        for(auto a : s){
            if (anag.find(a) == anag.end()){
                anag.insert(pair<char,int>(a,1));
            }
            else{
                anag[a]++;
            }
        }
        for(auto a : t){
            if((anag.find(a) == anag.end())) return false;
            else{
                anag[a]--;
                if(anag[a]==-1) return false;
            }
                
        }
        return true;
		
		/**
		Other solution , bad computation time
		if(s.length() != t.length()) return false;
        sort(s.begin(),s.end());
        
        sort(t.begin(),t.end());
        if(s==t) return true;
        return false;
		*/
    }
};