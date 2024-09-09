class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
       vector<bool>present(n+1, false);
        vector<int>DippearedNumbers;
        
        for(int num : nums){
            if(num <= n){//hre used to find the all the elemnt prasent or not if present return true;
                 present[num]=true;
            }
        }
        for(int i=1; i<=n; ++i){
            if(!present[i]){
                DippearedNumbers.push_back(i);
            }
        }
        return DippearedNumbers;
    }
};