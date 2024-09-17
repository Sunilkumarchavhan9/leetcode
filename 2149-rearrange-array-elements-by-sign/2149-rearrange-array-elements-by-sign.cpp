class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int>pos,neg,ans;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int ind1=0, ind2=0;
        while(ind2<nums.size()/2){
            ans.push_back(pos[ind1]);
            ind1++;
            ans.push_back(neg[ind2]);
            ind2++;
        }
        return ans;
    }
};