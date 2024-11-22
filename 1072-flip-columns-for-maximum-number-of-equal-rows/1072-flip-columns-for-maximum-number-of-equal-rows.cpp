class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int>patterncnt;
      int maxRow = 0;
      for(const auto& row : matrix){
        string pattern = "",  complement = "";
        for(int cell : row){
          pattern += cell ? '1' : '0';
          complement += cell ? '0' : '1';
        }
        patterncnt[pattern]++;
        maxRow = max(maxRow,patterncnt[pattern]);
        patterncnt[complement]++;
        maxRow = max(maxRow, patterncnt[complement]);
      }
      return maxRow;
    }
};