class Solution {
public:
    bool isVowels(char c){
        c=tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
      vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries){
          int n=words.size();
          vector<int>freq(n,0);
          
          for(int i=0; i<n; ++i){
              if(isVowels(words[i][0]) && isVowels(words[i].back())){
                           freq[i]=1;
              }
          }
          for(int i=1; i<n; ++i){
              freq[i]+=freq[i-1];
          }
           vector<int>result;
           for(int i=0; i<queries.size(); ++i){
               int l=queries[i][0], r=queries[i][1];
               if(l == 0){
                   result.push_back(freq[r]);
               }else{
                   result.push_back(freq[r]-freq[l-1]);
               }
           }
           return result;                
    }
};