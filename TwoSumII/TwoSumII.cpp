class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> el;
        for(int i=0; i<numbers.size();i++){
            if(el.find(target-numbers[i])==el.end()){
                el.insert({numbers[i],i});
            }else
                return { el.at(target-numbers[i])+1, i+1};
        }
        return {0,0};
    }
};