class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
       int ans=0, curr=0 , n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] - nums[i-1] == 1){
                if(curr % 2 == 0)curr++;
                else curr = 1;
            }else if(nums[i] - nums[i-1] == -1){
                if(curr % 2== 1)curr++;
                else curr=0;
            }else{ 
                curr=0;
                
            }
            ans = max(ans,curr+1);
        }
        if(ans == 1)return -1;
        else 
            return ans;
    }
};