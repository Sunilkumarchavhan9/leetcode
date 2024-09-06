class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int Maximum_consecutive_Ones=INT_MIN;
        for(int a : nums){
            if( a == 1){
                count++;
            }else{
                Maximum_consecutive_Ones = max (Maximum_consecutive_Ones, count);
                    count=0;
            }    
        }
        Maximum_consecutive_Ones = max (Maximum_consecutive_Ones, count);
        return Maximum_consecutive_Ones;
    }
};