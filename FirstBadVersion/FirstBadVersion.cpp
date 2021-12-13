// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        /**
        Linear Solution
            while(isBadVersion(n)) n--;
            return n+1;
        
        */
        /**
            O(nlogn)
        */
        int start=1, ending=n, mid;
        while(start<ending){
            mid= (start/2+ending/2);
            if(isBadVersion(mid)) ending=mid;
            else start=mid+1;
        }
        return start;
    }
};