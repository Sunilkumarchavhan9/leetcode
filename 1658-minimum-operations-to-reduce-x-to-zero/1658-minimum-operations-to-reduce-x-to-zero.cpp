class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int n =nums.size() , sum = 0;
      for(int num : nums){
        sum+= num;
      }
      int target = sum - x;
      int currSum = 0, mxlen = 0;
      int startindx = 0;
      bool found = false;
      
      for(int endindx=0; endindx<n; ++endindx){
        currSum +=  nums[endindx];
        while(startindx <= endindx && currSum > target){
          currSum -= nums[startindx];
          ++startindx;
        }if(currSum == target){
          found = true;
          mxlen = max(mxlen, endindx - startindx+1);
        }
      }
      return found ? n- mxlen : -1;
    }
};