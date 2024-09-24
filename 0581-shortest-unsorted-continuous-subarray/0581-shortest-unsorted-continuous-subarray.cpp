class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       int n=nums.size();
        vector<int>nums_copy = nums;
        sort(nums_copy.begin(), nums_copy.end());
        int s=-1, e=-1;
        for(int i=0; i<n; i++){
            if(nums_copy[i] != nums[i]){
                if(s == -1){
                    s= i;
                    e= i;
                }else{
                    e= i;
                }
            }
        }
        int ans = e-s+1;
        return ans == 1 ? 0:ans;
        
    }
};