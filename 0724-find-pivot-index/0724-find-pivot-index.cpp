class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftsum(n),rightsum(n);
        for(int i=0; i<n; i++){
            leftsum[i] = nums[i];
            if(i > 0)
                leftsum[i]+=leftsum[i-1];
        }
        for(int i=n-1; i>=0; i--){
            rightsum[i]=nums[i];
            if(i < n-1){
                rightsum[i]+=rightsum[i+1];
            }
        }
        for(int i=0; i<n; i++){
            int l=0, r=0;
            if(i == 0){
                l = 0;
            }else{
                l+=leftsum[i-1];
            }
            if(i == n-1){
                r = 0;
            }else{
                 r=rightsum[i+1];
            }
            
            if(l == r){
                return i;
            }
        }   
        return -1;
    }
};