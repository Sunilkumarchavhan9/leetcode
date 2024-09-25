class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
       int n=nums.size();
        vector<long>pref(n+1);
        for(int i=0; i<n; i++)
            pref[i+1] = pref[i] + nums[i];
        
        int ansIdx=-1;
        long minAvgdiff=LONG_MAX;
        for(int i=0; i<n; i++){
            long l=pref[i+1]/(i+1);
            long r=0;
            if(i < n-1) r=(pref[n] - pref[i+1])/(n-i-1);
            long currDiff=abs(l-r);
            if(currDiff < minAvgdiff){
                minAvgdiff = currDiff;
                ansIdx=i;
            }
        }
        return ansIdx;
    }
};