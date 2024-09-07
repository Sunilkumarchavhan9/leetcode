class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int ar[101]={0};
        for(int a : nums){
            ar[a]++;
        }
        int pre_ar[101]={0};
         pre_ar[0] = ar[0];
        for(int i=1; i<101; i++){
            pre_ar[i]=pre_ar[i-1]+ar[i];
        }
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0; i<n; i++){
            ans[i]=pre_ar[nums[i]] - ar[nums[i]];
        }
        return ans;
    }
};