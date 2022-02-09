// 100% 74%
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int i=0,j=n-1;
        // After this while we have the value of the diagonal in right position
        // Example [[1,2,3],[4,5,6],[7,8,9]] -> [[7,8,9],[4,5,6],[1,2,3]]
        while(i<j){
            swap(matrix[i],matrix[j]);
            i++;
            j--;
        }
        // We simply swap the elements above the main diagonal with the elements below the main diagonal
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};