class Solution {
public:
    bool isPowerOfHelper(int n) {
        if(n == 1)return true;
        if(n%3 != 0)return false;
        return isPowerOfHelper(n/3);
    }     
    bool isPowerOfThree(int n) {  
        if(n <= 0)return false;
        return isPowerOfHelper(n);
    }    
};