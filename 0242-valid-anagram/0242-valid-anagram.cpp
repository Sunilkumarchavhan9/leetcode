class Solution {
public:
   bool isAnagram(string s, string t) {
       if(s.size() != t.size()){
           return false;
       }
       vector<int>freAr(26,0);
       for(int i=0; i<s.size(); i++){
           freAr[s[i]-'a']++;
           freAr[t[i]-'a']--;
           
       }
       for(int i=0; i<freAr.size(); i++){
           if(freAr[i]!=0){
               return false;
           }
       }
       return true;
    }
};