/**
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Power of Two.
Memory Usage: 6.1 MB, less than 23.03% of C++ online submissions for Power of Two.
*/class Solution {
public:
    int logbase(int a, int base)
    {
        return log(a) / log(base);
    }
    bool isPowerOfTwo(int n) {
        if(n<=0 ) return false;
        return pow(2,logbase(n, 2)) == n;
    }
};