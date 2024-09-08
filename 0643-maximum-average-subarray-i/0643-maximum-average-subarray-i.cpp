class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int maxSum=INT_MIN;
        int currSum=0;
        for(int i=0; i<k; i++){
            currSum += nums[i];
        }
        maxSum = max(maxSum, currSum);
        for(int i=k; i<n; i++){
            currSum += nums[i];
            currSum -= nums[i-k];
            maxSum = max(maxSum, currSum);
        }
        double ans=(1.0)*maxSum/k;
        return ans;
    }
};