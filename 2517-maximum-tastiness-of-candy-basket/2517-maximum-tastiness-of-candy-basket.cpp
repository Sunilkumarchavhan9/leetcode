class Solution {
public:
    bool selectedcandy(vector<int>price, int k, int min_tastiness){
        int cnt = 1;
        int lst_sel = price[0];
        for(int i=1; i<price.size(); i++){
            if(price[i] - lst_sel >= min_tastiness){
                cnt++;
                lst_sel = price[i];
                if(cnt == k)return true;
            }
        }
        return false;
    }
    int maximumTastiness(vector<int>& price, int k) {
        int n = price.size();
        if(k > n) return 0;
        sort(price.begin(), price.end());
        int left = 1,  right = price.back() - price.front();
        int max_tastiness = 0;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(selectedcandy(price, k , mid)){
                max_tastiness = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return max_tastiness;
    }
};