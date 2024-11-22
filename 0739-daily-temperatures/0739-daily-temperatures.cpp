class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>result(n, 0);
        stack<int>monostk;
        for(int i = 0; i < n; i++){
            while(!monostk.empty() &&   temperatures[monostk.top()] < temperatures[i] ){
                int prevday = monostk.top();
                monostk.pop();
                result[prevday] = i - prevday;
            }
            monostk.push(i);
        } 
        return result;      
    }
};