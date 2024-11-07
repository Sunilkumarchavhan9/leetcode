class Solution {
public:
    int largestCombination(const vector<int>& candidates) {
        int maxcombi = 0;
        for(int bi=0; bi<32; bi++){
            int count = 0;
            for(int num : candidates){
                if(num &(1 << bi)){
                    count++;
                }    
            }
            maxcombi = max(maxcombi,count);
        }
        return maxcombi;
    }
};