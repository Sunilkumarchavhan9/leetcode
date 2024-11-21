class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(st.empty()) st.push(s[i]);
            else if(st.top() - 32 == s[i] || st.top() + 32 == s[i]) st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
//To solve the problem without using a stack  we can use a two-pointer technique or simply modify the //string in place while iterating over it The idea is to iterate through the string check for adjacent //bad pairs and remove them until the string becomes  good 