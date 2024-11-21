class Solution {
public:
    bool Compare(stack<char>st1, stack<char>st2){
        if(st1.size() != st2.size()) return false;
        while(st1.size()> 0 && st2.size()> 0){
            if(st1.top() != st2.top()) return false;
            st1.pop();
            st2.pop();
        }
        return true;
    }
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '#' && st1.size() > 0){
                st1.pop();
            }else if(s[i] != '#'){
                st1.push(s[i]);
            }
        }
        for(int i=0; i<t.size(); i++){
            if(t[i] == '#' && st2.size() > 0){
                st2.pop();
            }else if(t[i] != '#'){
               st2.push(t[i]);
            }
        }
        return Compare(st1, st2);
    }
};