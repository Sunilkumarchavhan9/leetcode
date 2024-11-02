class Solution {
public:
    long long requiredHrs(vector<int>&piles, int k){
         long long hours = 0;
      for(int i=0; i<piles.size(); i++){
          hours += (piles[i] / k);
        if(piles[i]%k != 0){
          hours++;
        }
      }
      return hours;
    };
    int minEatingSpeed(vector<int>& piles, int h) {
      int maxi = INT_MIN;
      for(auto &a : piles){
        maxi = max(a,maxi);
      }
      int s =1, e = maxi;
      int ans = -1;
      while(s <= e){
        int mid = s + (e - s)/2;
         long long req_hours = requiredHrs(piles, mid);
        if(req_hours <= h){
          ans = mid;
          e = mid - 1;
        }else{
          s = mid + 1;
        }
      }
      return ans;
    }
};