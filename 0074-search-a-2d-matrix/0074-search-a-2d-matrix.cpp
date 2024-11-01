class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if(row == 0)return false;
        int col = matrix[0].size();
       int top = 0, bottom = row - 1;
      while(top <= bottom){
        int row = top + (bottom - top)/2;
        if(matrix[row][0] <= target && matrix[row][col - 1] >= target){
          int left = 0, right = col - 1;
          while(left <= right){
            int mid = left + (right - left)/2;
            if(matrix[row][mid] == target){
              return true;
            }else if(matrix[row][mid] > target){
              right = mid - 1;
            }else{
              left = mid + 1;
            }
          }
          return false;
        }else if(matrix[row][0] > target){
          bottom = row - 1;
        }else{
          top = row + 1;
        }
      }
      return false;
    }
};