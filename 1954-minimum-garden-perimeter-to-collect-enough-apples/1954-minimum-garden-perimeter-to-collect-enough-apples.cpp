class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long apples = 0;
        long long k = 0;
        
        while(apples < neededApples){
            k++;
            apples += 12 * k * k;
        }
        return 8 * k;
    }    
};
