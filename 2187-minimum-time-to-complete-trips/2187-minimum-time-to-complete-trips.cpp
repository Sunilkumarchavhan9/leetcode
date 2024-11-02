class Solution{
public:
  long long requiredTime(vector<int>& time, long long giventime){
    long long  total = 0;
    for(int i=0; i<time.size(); i++){
      total += (giventime/time[i]);
    }
    return total;
 }
    long long minimumTime(vector<int>& time, int totalTrips){
      int maxi = INT_MIN;
      for(auto &a : time){
        maxi = max(a,maxi);
      }
      long long  s = 1, e = static_cast<long long>(maxi) * totalTrips; ;
      long long ans = e;
      while(s <= e){
        long long mid = s +(e - s)/2;
        long long minreq_time = requiredTime(time, mid);
        if(minreq_time >= totalTrips){
          ans = mid;
          e = mid - 1;
        }else{
          s = mid + 1;
        }
      }
      return ans;
    }
};
