class Solution {
    vector<int> mergeSortedArrays(vector<int> &left, vector<int> &right) {
        int i=0, j=0;
        vector<int>ans;
        while(i < left.size() and j < right.size()){
            if(left[i] <= right[j])ans.push_back(left[i++]);
            else ans.push_back(right[j++]);
        }
        while(i < left.size())ans.push_back(left[i++]);
        while(j < right.size())ans.push_back(right[j++]);
        return ans;
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums;
        vector<int>left(nums.begin(), nums.begin()+n/2);
        vector<int>right(nums.begin()+n/2, nums.end());
        left = sortArray(left);
        right = sortArray(right);
        return mergeSortedArrays(left, right);
        
    }
};