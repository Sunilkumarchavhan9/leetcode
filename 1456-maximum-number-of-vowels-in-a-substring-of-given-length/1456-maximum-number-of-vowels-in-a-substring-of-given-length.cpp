class Solution {
private:
    int isVowels(char c){
        if(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return 1;
        }
        return 0;
    }
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int ans=0;
        int curr=0;
        
        for(int i=0; i<k; i++){
            curr += isVowels(s[i]);
        }
        ans = max(ans, curr);
        for(int i=k; i<n; i++){
            curr+=isVowels(s[i]);
            curr -= isVowels(s[i-k]);
            ans = max(ans,curr);
        }
        return ans;
    }
};   