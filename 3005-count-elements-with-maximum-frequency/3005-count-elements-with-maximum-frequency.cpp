class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>frequency(101, 0);
        int ans=0;
        int max_fre=0;
        
        for(int x : nums){
            frequency[x]++;
            max_fre= max(max_fre, frequency[x]);
        }
        for(int i=1; i<=100; i++){
            if(frequency[i] == max_fre){
                ans++;
            }
        }
        ans*=max_fre;
        return ans;
        
    }
};