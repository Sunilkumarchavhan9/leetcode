class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin() , :: tolower );
        
        string str;
        for(int i=0; i<s.size(); i++){
            if( (s[i]>= 48 && s[i]<=57) || (s[i]>=97 && s[i]<=122) ){
                str +=s[i];
            }
        }
        string revStr=str;
        reverse(revStr.begin() , revStr.end());
        if(str == revStr) return true;
            return false;
        
    }
   
};    