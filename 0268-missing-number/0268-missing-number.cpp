class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       for(int i=0; i<=n; i++ ){
           int flag=0;
           for(int a : nums){
               if(a == i){
                   flag=1;
               }
           }
           if(flag == 0) return i;
       } 
        return -1;
    }
};