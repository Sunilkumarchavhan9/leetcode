class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
       int n = code.size();
       vector<int>result(n,0);

       if(k == 0){
        return result;
       }
       
       int s = k > 0 ? 1 : n+k;
       int e = k > 0 ? k : -1;
       int sum = 0;
       for(int i = s; i != (e + n + 1)%n; i = (i+1)%n){
          sum += code[i % n];
        }
        for(int i=0; i<n; ++i){
            result[i] = sum;
            sum -= code[(i + s) % n];
            sum += code[(i + e +  1) %n];
        }
        return result;
    }   
};