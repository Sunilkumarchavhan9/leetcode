class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
       int n=nums.size();
       int m=pattern.size();
        int ans=0;
        for(int i=0; i<n-m; i++){
            int flag= true;
            for(int j=0; j<m; j++){
                if(i+j+1 >= n){
                    flag =false;
                    break;
                }
                if((pattern [j] == 1 && nums[i+j+1] <= nums[i+j])||
                (pattern [j] == 0  && nums[i+j+1] != nums[i+j])||
                (pattern [j] == -1 && nums[i+j+1] >= nums[i+j])){
                    flag=false;
                    break;
                }    
            }
            if(flag)ans++;
        }
        return ans;
    }
};