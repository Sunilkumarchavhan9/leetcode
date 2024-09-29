class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max_con_ones = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
               count++;
            }else{
               max_con_ones = max( max_con_ones, count);
                  count=0;
            }
        }
         max_con_ones = max( max_con_ones, count);
         return   max_con_ones;
    }
};