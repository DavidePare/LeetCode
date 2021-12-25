class Solution {
public:
    int titleToNumber(string columnTitle) {
        // 100% -- 11%
        int max=columnTitle.length()-1;
        int res=0;
        for(int i=0; i<columnTitle.length();i++){
            if(i-max!=0){
                res+=(columnTitle[i]-'@')*pow(26,max-i)-(columnTitle[i]-'@');
            }
            res+=(columnTitle[i]-'@');
        }
        return res;
        
        
        //SHIT SCORE 5% 4% 
       /* map<char,int> associateMap;
        int max=columnTitle.length()-1;
        int res=0;
        for(int i=0; i<=26 ; i++){
            char c= 'A'+i;
            associateMap.insert(pair<char,int>('A'+i,i+1));
        }
        for(int i=0; i<columnTitle.length();i++){
            if(i-max!=0){
                res+=associateMap.at(columnTitle[i])*pow(26,max-i)-associateMap.at(columnTitle[i]);
            }
            res+=associateMap.at(columnTitle[i]);
        }
        return res;*/
    }
};