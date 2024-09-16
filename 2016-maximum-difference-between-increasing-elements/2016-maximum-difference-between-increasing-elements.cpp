class Solution {
public:
    int maximumDifference(vector<int>& nums) {
       int n = nums.size();
        int ans = -1;
        int min_ele=INT_MAX;
        
        for(int j=0; j<n; j++){
            if(nums[j]> min_ele)
               ans = max (ans, nums[j]-min_ele);
                min_ele = min (min_ele, nums[j]);
        }
        return ans;
    }
};






