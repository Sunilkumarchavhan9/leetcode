class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>map;
        int complete;
        for(int i=0; i<nums.size(); i++){
            complete = target - nums[i];
            if(map.find(complete) != map.end()){
                return{map[complete], i};
            }
            map[nums[i]]=i;
        }
        return{};
    }
};