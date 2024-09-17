class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums){
        int n= nums.size();
       vector<long long>ans;
        long long mx=0;
        
        for(int i=0; i<n; i++){
            mx = max (mx,nums[i]+0LL);
            ans.push_back(mx+nums[i]);
        }
        for(int i=1; i<n; i++){
            ans[i]+=ans[i-1];
        }
        return ans;
    }
};




