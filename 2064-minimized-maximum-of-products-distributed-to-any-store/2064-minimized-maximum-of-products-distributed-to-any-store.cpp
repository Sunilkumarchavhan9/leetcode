class Solution {
public:
    int allproduct(int x , int n, vector<int>& quantities) {
      int cnt = 0;
      for(int q : quantities){
        cnt += (q + x -1)/x;
      }
       return cnt <= n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int maxi = *max_element(quantities.begin(), quantities.end());
        int s = 1, e = 2 * maxi;
        int ans = e;
        while(s <= e) {
          int mid = s + (e - s)/2;
          if(allproduct(mid,n,quantities)){
            ans = mid;
            e = mid - 1;
          }else{
            s =mid + 1;
          }
        }  
        return ans;
    }
};
