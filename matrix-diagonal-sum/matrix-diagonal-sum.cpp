class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       long int x=0, y=0;
        int n=mat.size();
        int j=n-1;
        for(int i=0; i<n; i++) {
            x+=mat[i][i];
            y+=mat[i][j];
            j--;
        }
        if(n%2!=0) {
            y-=mat[n/2][n/2];
        }
        return x+y;
    }
};