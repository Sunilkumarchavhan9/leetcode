class Solution {
public:
    long long  requiredDays(vector<int>&bloomDay, long long  days, long long k){
        long long bouquets = 0, flowers = 0;
        for(int bloom :  bloomDay){
            if(bloom <= days){
                flowers++;
                if(flowers == k){
                    bouquets++;
                    flowers = 0;
                }
            }
            else{
                flowers  = 0;
            }
        }
        return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long product = static_cast<long long >(m)*k;
        if(product > n) return -1;
        long long s = 1, e = *max_element(bloomDay.begin(), bloomDay.end());
        long long  ans = -1;
        while(s <= e){
            int mid = s + (e - s)/2;
            long long  bouquets = requiredDays(bloomDay, mid,k);
            if(bouquets >= m){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return ans;
    }
};