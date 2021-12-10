class Solution {
public:
    int romanToInt(string s) {
        int sum=0,i;
        // I associated to value a "priority".
        map<char,int> m= {
            {'M',1000},
            {'D',500},
            {'C',100},
            {'L',50},
            {'X',10},
            {'V',5},
            {'I',1}
        };
        for( i=0; i< s.length()-1;i++){
            if(m.at(s[i]) >= m.at(s[i+1])) sum+=m.at(s[i]);
            else sum -=m.at(s[i]);
        }
        return sum+=m.at(s[s.length()-1]);
     }
};