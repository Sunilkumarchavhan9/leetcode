class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       int n=nums.size();
        vector<int>copy_nums = nums;
        sort(nums.begin(), nums.end());
        int s=-1 , e=-1;
        
        for(int  i=0; i<n; i++){
            if(nums[i] != copy_nums[i]){
                if(s == -1){
                    s=i;
                    e=i;
                }else{
                    e=i;
                }
            }
        }
        int ans = e-s+1;
        return ans == 1 ? 0:ans;
    }
};