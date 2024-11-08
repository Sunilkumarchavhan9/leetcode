class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int n = nums.size() , sum = 0;
      for(int num : nums){
       sum += num;
    }
    int target = sum - x;
    int currsum = 0, maxlen = 0;
    int startindx = 0;
    bool found = false;
    for(int endindx = 0; endindx < n; ++endindx){
        currsum += nums[endindx];
      while(startindx <= endindx && currsum > target){
          currsum -= nums[startindx];
          ++startindx;
      }
      if(currsum == target){
            found = true;
        maxlen = max(maxlen, endindx - startindx+1);
      }
    }
     return found ? n - maxlen : -1;
  }
};