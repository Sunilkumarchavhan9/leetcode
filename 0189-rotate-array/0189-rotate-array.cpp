class Solution {
public:
   // void rotate_1(vector<int>&nums,int k){
        //int n=nums.size();
       // vector<int>temp(k);
        //for(int i=n-k; i<n; i++){
           // temp[i-n+k] = nums[i];
       // }
       // for(int i=n-k-1; i>=0; i--){
           // nums[i+k]=nums[i];
       // }
       // for(int i=0; i<k; i++){
            //nums[i]=temp[i];
        //}  
    //}
    void rotate(vector<int>& nums, int k) {
       //k=k%(nums.size());
       // rotate_1(nums, k);
       // for(int num : nums){
    //cout<<num<<" ";
     // }      
        
        k = k % (nums.size());
        int n=nums.size();
        
        reverse(nums.begin(), nums.begin() + n-k);
        reverse(nums.begin() + n-k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};