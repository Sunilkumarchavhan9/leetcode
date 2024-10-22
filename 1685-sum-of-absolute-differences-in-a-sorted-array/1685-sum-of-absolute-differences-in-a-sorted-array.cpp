class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        vector<int>preSum(n, 0);
        preSum[0] = nums[0];
        for(int i=1; i<n; i++){
            preSum[i] = preSum[i-1] + nums[i];
        }
        vector<int>sufSum(n,0);
        sufSum[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            sufSum[i] = sufSum[i+1] + nums[i];
        }
        for(int i=0; i<n; i++){
            int l = i;
            int r =  n - i - 1;
            int ans = 0;
            if(i > 0)ans+= l*nums[i] - preSum[i-1];
            if(i < n-1)ans+= sufSum[i+1]- r*nums[i];
            res[i] = ans;
        }
        return res ;
        
    }
};