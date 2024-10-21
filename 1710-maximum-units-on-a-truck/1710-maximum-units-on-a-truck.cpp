class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int ans = 0;
        for(auto it : boxTypes){
           int x = min(truckSize,it[0]);
            ans +=it[1]*x;
            truckSize -= x;
            if(truckSize == 0){
                break;
            }
        }
        return ans;
    }
};
