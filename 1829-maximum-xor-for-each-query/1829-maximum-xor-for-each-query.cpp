class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int xor_sum = 0;
        for (int num : nums) {
            xor_sum ^= num;
        }
        int max_k = (1 << maximumBit) - 1;
        vector<int> answer(nums.size());

        for (int i = nums.size() - 1; i >= 0; --i) {
            answer[nums.size() - 1 - i] = max_k ^ xor_sum;
            xor_sum ^= nums[i];
        }
        return answer;
    }
};