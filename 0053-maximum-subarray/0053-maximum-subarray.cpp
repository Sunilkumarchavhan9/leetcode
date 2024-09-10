class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int bag=0;
        int ansSum=INT_MIN;
        
        for(int a: nums){
            bag+=a;
            ansSum=max(ansSum, bag);
            //if some time bag smaller then 0  means '-'no make as pos no as =0;
            if(bag < 0) bag=0;
        }
        return ansSum;
    }
};





