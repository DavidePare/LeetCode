class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size= matrix[0].size()-1,l,r,mid;
        cout<<size<<"\n";
        for(int i=0; i<matrix.size();i++){
            r=0;
            l=size;
            if(target >= matrix[i][r] && matrix[i][l] >=target ){
                while(r<=l){
                    mid= r+(l-r) /2;
                    if(matrix[i][mid] == target) return true;
                    if(matrix[i][mid] > target){
                        l=mid -1;
                    }else{
                        r=mid+1;
                    }
                }
            }
        }
        return false;
    }
};