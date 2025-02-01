class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       unordered_map<int, int>frq;
       for(int num : nums){
            if(num % 2 == 0)
            frq[num]++;
       }
       int ans_ele = -1, max_frq_ele = 0;
       for(pair<int, int>p : frq){
            int num = p.first, f = p.second;
            if(f > max_frq_ele){
                max_frq_ele = f;
                ans_ele = num;
            }else if(f == max_frq_ele){
               ans_ele = min(ans_ele, num);
            }
        } 
        return ans_ele;
    }
};