class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
      int n=nums.size();
        vector<long>pref(n+1);
        for(int i=0; i<n; i++){
            pref[i+1] = pref[i]+nums[i];
        }
        int ansIndex=-1;
        long max_avg=LONG_MAX;
        for(int i=0; i<n; i++){
            int l=pref[i+1]/(i+1);
            int r=0;
            if(i < n-1) r=(pref[n] - pref[i+1])/(n-i-1);
            long curr_deff = abs(l-r);
            if(curr_deff < max_avg){
                max_avg=curr_deff;
                ansIndex =i;
            }
        }
        return ansIndex;
    }
};