class Solution {
public:
    string makeFancyString(string s) {
      string result;
      int n = s.size();
      for(int i=0; i<n; i++){
        int len = result.size();
        if(len < 2 || !(result[len - 1] == result[len - 2] && result[len - 1] == s[i])){
          result += s[i];
        }
      }
      return result;
    }   
};
