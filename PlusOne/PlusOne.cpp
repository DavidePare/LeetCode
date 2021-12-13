class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int rest=1,i =digits.size()-1;
        while (rest==1 && i>=0){
            digits[i]=digits[i]+1;
            if(digits[i]==10){
                digits[i]=0;
                rest=1;
            }
            else{
                rest=0;
                break;
            } 
            i--;
        }
        // easy solution push_back 1 and reverse array but i would find something more fine.
        // it s impossible to add element at front of vector :'(  dequeue and push_front is for list.
        if(rest==1){
            digits.push_back(0);
            digits[0]=1;
        }
        return digits;
    }
};