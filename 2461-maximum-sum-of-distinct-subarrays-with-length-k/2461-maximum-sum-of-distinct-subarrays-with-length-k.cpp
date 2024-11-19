class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> elements;
        long long maxSum = 0, currentSum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            while (elements.count(nums[right])) {
                currentSum -= nums[left];
                elements.erase(nums[left]);
                left++;
            }

            elements.insert(nums[right]);
            currentSum += nums[right];

            if (right - left + 1 == k) {
                maxSum = max(maxSum, currentSum);
                currentSum -= nums[left];
                elements.erase(nums[left]);
                left++;
            }
        }

        return maxSum;
    }
};
