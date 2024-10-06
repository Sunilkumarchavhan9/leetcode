class Solution {
public:
    void reverse(int st, int en, vector<char>&s){
        if(st > en) return;
        char temp = s[en];
        s[en] = s[st];
        s[st]=temp;
        return reverse(st+1, en-1, s);
    }
    
    void reverseString(vector<char>&s){
        return reverse(0,s.size()-1, s);
    }
};