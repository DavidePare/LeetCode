class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> m ;
        for(int n: nums){
		    //FIRST SOLUTION  
			/*if(m.find(n) != m.end()) return n;
            else m.insert(n);*/
			//Second Solution
            if(! m.insert(n).second ) return n;
        }
        return -1;
    }
};