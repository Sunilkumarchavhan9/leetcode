class NumMatrix {
public:
    int pref[201][201] ={0};
    NumMatrix(vector<vector<int>>& matrix) {
       int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                pref[i][j] = (i-1 >=0 ? pref[i-1][j] : 0)+
                    (j-1 >=0 ? pref[i][j-1]: 0)-
                    ( (i-1 >= 0 && j-1>= 0)? pref[i-1][j-1]:0)+matrix[i][j];
            }
        }
    }    
    int sumRegion(int t, int l, int b, int r) {    
        return pref[b][r] - 
            (t-1 >=0  ? pref[t-1][r] : 0)-
            (l-1 >=0 ? pref[b][l-1] : 0)+
            ((t-1>=0 && l-1 >=0) ? pref[t-1][l-1] : 0);
    
    }    
        
};
/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */