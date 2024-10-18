class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end(),cmp);
        int cnt= 1;
        int prev =0 ;
        for(int i =1 ; i<n; i++){
            if(points[i][0] > points[prev][1]){
                cnt++;
                prev = i;
            }
        }
        return cnt;
    }
};