class Solution {
public:
    bool isPossible(long long mid, vector<int>& ranks, int cars) {
        long long car = 0;
        for(auto a : ranks){
            car += sqrt(mid /a);
        }
        if(car >= cars){
           return true;
        }
        return car>=cars ;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long  ans = 0;
        long long s = 0, e = ranks[0]*1LL*cars*cars;
        while(s <= e){
            long long mid = (s+e)/2;
            if(isPossible(mid, ranks,cars)){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return ans;
    }
};
