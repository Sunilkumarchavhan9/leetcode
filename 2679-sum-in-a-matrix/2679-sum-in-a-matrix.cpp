class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
      for(auto &row : nums){
        sort(row.begin(), row.end());
      }  
      int totalSum = 0;
      int n = nums.size();
      int m = nums[0].size();
      for(int col=0; col<m; ++col){
        int maxVal = 0;
        for(int row=0; row<n; ++row){
            maxVal = max(maxVal, nums[row][col]);
        }
        totalSum += maxVal;
      }
      return totalSum;
    }
};