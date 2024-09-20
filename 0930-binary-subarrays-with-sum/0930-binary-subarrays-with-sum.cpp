class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
         int i = 0, j = 0, count = 0, sum = 0, temp = 0;
        while(j < n){
            sum+= nums[j];
            if(nums[j] == 1){
                temp=0;
            }
            if(sum > goal ){
                sum -= nums[i];
                i++;
            }while(sum == goal && i<=j ){
                temp++;
                sum -= nums[i];
                i++;
            }
            count+=temp;
            j++;
        }
        return count;
    }
};