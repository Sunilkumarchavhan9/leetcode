class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n = nums.size();
        int s=0;
        int zero_count=0;
        int ans=0;
        
        for(int e=0; e<n; e++){
            if(nums[e] == 0){
                zero_count++;
            }
            while(zero_count > k){
                if(nums[s] == 0){
                    zero_count--;
                }
                s++;
            }
            ans = max (ans, e-s+1);
        }   
        return ans;
    }
};