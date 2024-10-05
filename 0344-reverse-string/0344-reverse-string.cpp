class Solution {
public:
    void helper(int st, int en, vector<char>&s){
        if(st > en) return;
        char temp = s[en];
        s[en] = s[st];
        s[st] = temp;
         helper(st+1, en-1,s);
    }
    
    void reverseString(vector<char>&s){
         helper(0,s.size()-1,s);
    }
};