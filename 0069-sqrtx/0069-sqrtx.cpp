class Solution {
public:
    long long mySqrt(long long x) {
        if(x == 0 || x == 1)return x;
        long long  l = 0, r = x;
        long long ans = - 1;
        while(l <=  r){
            long long mid = (l+r)/2;
            if(mid * mid > x){
                r = mid - 1;
            }else{
                ans = mid;
                l = mid + 1;
            }
        }
        return ans;
    }
};