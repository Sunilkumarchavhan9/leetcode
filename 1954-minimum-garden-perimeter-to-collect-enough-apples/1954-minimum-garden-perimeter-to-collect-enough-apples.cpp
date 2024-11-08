class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long apple = 0;
        long long k = 0;
      while(apple < neededApples){
        k++;
        apple += 12*k*k;
      }
      return 8*k;
    }    
};
