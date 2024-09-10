class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currSum=0;;
        
        for(int i=0; i<nums.size(); ++i){
            currSum+=nums[i];
            maxsum = max(maxsum, currSum);
            
            if(currSum < 0)
                currSum = 0;
        }
        return maxsum;
    }
};