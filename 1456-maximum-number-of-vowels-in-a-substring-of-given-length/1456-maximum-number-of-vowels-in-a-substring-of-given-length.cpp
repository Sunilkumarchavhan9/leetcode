class Solution {
private:
    int isVowels(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
             return 1;
        } 
        return 0;
    }
    
public:
    int maxVowels(string s, int k) {
        int n=s.size();
       int ans=INT_MIN;
        int currsum=0;
        
        for(int i=0; i<k; i++){
            currsum+=isVowels(s[i]);
        }
        ans = max(ans, currsum);
        for(int i=k; i<n; i++){
            currsum += isVowels(s[i]);
            currsum -= isVowels(s[i-k]);
            ans = max(ans, currsum);
        }
        return ans;
    }
};   