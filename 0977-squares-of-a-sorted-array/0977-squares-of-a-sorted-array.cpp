class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n=nums.size();
        vector<int>ans(n);
        int s=0;
        int e=n-1;
        
        int index=n-1;
        while(s <= e){
            int x=nums[s]*nums[s];
            int y=nums[e]*nums[e];
            if(x > y){
                ans[index--]=x;
                s++;
            }else{
                ans[index--]=y;
                e--;
            }
        }
        return ans;
    }
};