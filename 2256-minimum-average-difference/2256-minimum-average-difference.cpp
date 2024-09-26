class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
      int n=nums.size();
          vector<long>pref(n+1);
          for(int i=0; i<n; i++){
              pref[i+1] = pref[i] + nums[i];
          }
        
        int ansIndx=-1;
        long minAvgdiff = LONG_MAX;
        for(int i=0; i<n; i++){
            int l= pref[i+1]/(i+1);
            int r=0;
            if(i <n-1) r=(pref[n] - pref[i+1])/(n - i - 1);
            long curr_def = abs(l-r);
            if(curr_def < minAvgdiff){
                 minAvgdiff = curr_def;
                ansIndx=i;
            }
        }
        return ansIndx;
    }
};