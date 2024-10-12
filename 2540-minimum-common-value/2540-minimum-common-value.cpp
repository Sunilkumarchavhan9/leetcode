class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int start=0, end=0;
        while(start < n && end < m){
            if(nums1[start] > nums2[end]) end++;
            else if(nums1[start] < nums2[end])start++;
            else return nums1[start];
        }
        return -1;
    }
};