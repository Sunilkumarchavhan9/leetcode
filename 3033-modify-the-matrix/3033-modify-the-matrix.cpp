class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m =matrix[0].size();
        vector<vector<int>>ans=matrix;
        for(int j=0; j<m; j++){
            int max_ele=INT_MIN;
            for(int i=0; i<n; i++){
                if(matrix[i][j] != -1){
                    max_ele = max(max_ele, matrix[i][j]);
                }
            }
            for(int i=0; i<n; i++){
                if(matrix[i][j] == -1){
                    ans[i][j] = max_ele; 
                }    
            }
        }
        return ans;
    }
};