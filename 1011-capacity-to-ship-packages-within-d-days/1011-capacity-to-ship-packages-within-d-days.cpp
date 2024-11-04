class Solution {
public:
    int rqdays(int cap, vector<int>&weights){
      int req_day = 1;
      int av_cap = cap;
      for(int i = 0; i<weights.size(); i++){
        av_cap-= weights[i];
        if(av_cap < 0){
          req_day++;
          av_cap = cap;
          av_cap -= weights[i];
        }
      }
      return req_day;
    }
    int shipWithinDays(vector<int>&weights , int days) {
        int maxi = INT_MIN, sum = 0;
      for(int i=0; i<weights.size(); i++){
        maxi = max(maxi, weights[i]);
        sum += weights[i];
      } 
      int s = maxi, e = sum;
      int ans = 0;
      while(s <= e){
        int mid = s + (e - s)/2;
        int min_reqday = rqdays(mid,weights);
        if(min_reqday <= days){
          ans = mid;
          e = mid - 1;
        }else{
          s = mid + 1;
        }
      }
      return ans;
    }
};