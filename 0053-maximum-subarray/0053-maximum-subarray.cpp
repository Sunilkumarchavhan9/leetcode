class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bag=0;
        int ans=INT_MIN;
        
        for(int  a : nums){
            bag+= a;
            ans = max(ans , bag);
            if(bag < 0)  bag =0;
        }    
     
            //if some time bag smaller then 0  means '-'no. make as pos no as =0;
        return ans;
    }
};





