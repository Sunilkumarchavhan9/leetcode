class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int  i=1; i<n; i++){
            mini = min(mini, nums[i] - nums[i-1]);
        }  
        return mini;
    }
};