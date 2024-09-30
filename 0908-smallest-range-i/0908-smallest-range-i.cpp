
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
      int n=nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        
        int diff = mx - min;
        return max(0, diff - 2*k);
    }
};






 //adjust the difference by subtracting 2*k