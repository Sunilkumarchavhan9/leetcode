class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       int n=mat.size();
       int m=mat[0].size();
        
        int row[n];
        int col[m];
        
        for(int i=0; i<n; ++i){
            row[i]=0;
            for(int j=0; j<m; j++){
                col[j]=0;
            }
        }
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(mat[i][j] == 1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int speacial=0;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(mat[i][j] && row[i] == 1 && col[j] == 1){
                    speacial++;
                }
            }
        }
        return speacial;
    }
};