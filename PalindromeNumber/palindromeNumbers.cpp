class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> vec;
        if(x<0) return false;
        if(x< 10) return true;
        long i=1;
        while(x%i != x){
            vec.push_back((x/i)%10);
            i*=10;
        }
        int l=vec.size()-1;
        i=0;
        while(i<l){
            if(vec[i]!=vec[l]) return false;
            i++,l--;
        }
            
        return true;
        /* Best Solution https://www.code-recipe.com/post/palindrome-number
		if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        int res = 0;
        while (x > res) {
            res = res * 10 + x % 10;
            x = x / 10;
        }
        return (x == res || x == res / 10);
		*/
    }
};