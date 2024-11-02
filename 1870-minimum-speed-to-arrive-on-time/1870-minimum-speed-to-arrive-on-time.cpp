class Solution {
public:
    bool isPossible(vector<int>& dist, int speed, double hour) {
        double  ans = 0;
        int n = dist.size();
        for(int i=0; i<n-1; i++){
            if(dist[i]%speed == 0){
                ans += dist[i]/speed;
            }else{
                ans += (dist[i]/speed)+1;
            }
        }
        ans += (double)(dist[n-1]) / (double)(speed);
       if(ans > hour)
          return false;
        return true;
    }    
    int minSpeedOnTime(vector<int>& dist, double hour) {

        int st = 1, ed = 1e7;
        int ans = -1, n = dist.size();
        while (st <= ed) {
            int mid = (st + ed) / 2;

            if (isPossible(dist, mid, hour)) {
                ans = mid;
                ed = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};