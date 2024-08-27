class Solution {
private:
    bool validPalindrome(string s, int i,  int j) {
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0; 
        int j=n-1;
        while(i < j){
            if(s[i] != s[j]){
                if( validPalindrome(s, i, j-1) ||  validPalindrome(s, i+1, j)){
                    return true;
                }else return false;    
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
};