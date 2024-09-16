class Solution {
public:
     int maxSubArray(vector<int>& nums){
     int n=nums.size();
         int bag=0;
         int ans=INT_MIN;
         
         for(int i=0; i<n; i++){
            bag+=nums[i];
             ans = max(ans,bag);
             if(bag < 0) bag=0;
         }
            //if some time bag smaller then 0  means '-'no. make as pos no as =0;;
        return ans;
    }
};





