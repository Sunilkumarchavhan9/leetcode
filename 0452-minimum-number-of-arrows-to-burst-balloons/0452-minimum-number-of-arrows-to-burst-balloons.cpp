class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end(),cmp);
        int ans = 0;
        int last =0 ;
        for(int i =0 ; i<n; i++){
            if(i == 0){
                ans++;
                last = points[i][1];
                continue;   
            }
            if(last >= points[i][0])continue;
            else{
                last = points[i][1];
                ans++;
            }
        }
        return ans;
    }
};