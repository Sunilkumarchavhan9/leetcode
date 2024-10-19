class Solution {
public:
    bool solve(int i, int j, std::vector<int>& nums) {
        if(j - i + 1 <= 2){
            return true;
        }
        vector<int>subArray(nums.begin()+i, nums.begin()+j+1);
        sort(subArray.begin(), subArray.end());
            int diff = subArray[1] - subArray[0];
            for(int k = 1; k < subArray.size() - 1; ++k ){
                if(subArray[k+1] - subArray[k] != diff){
                  return false;
                }
            }
            return true;
    }    
    vector<bool> checkArithmeticSubarrays(std::vector<int>& nums,vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int m = l.size();
        for(int i =0 ; i < m; i++){
            ans.push_back(solve(l[i],r[i],nums));
        }
        return ans;
    }
};