class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n == 1)return 0;
        int jump=0;
        int min_jump=0;
        int endjump=0;
        for(int i=0; i<n-1; i++){
            min_jump = max(min_jump, i+nums[i]);
            if(i == endjump){
                jump++;
                endjump = min_jump;
                if(endjump >= n-1)break;
            }
        }
        return jump;
    }
};











