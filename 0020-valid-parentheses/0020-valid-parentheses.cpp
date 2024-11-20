class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto ch : s){
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }else if(ch == ')'){
               if(st.empty() || st.top() != '('){
                  return false;
               }else {
                  st.pop();
               }
            }else if(ch == ']'){
                if(st.empty() || st.top() != '['){
                  return false;
                }else{
                  st.pop();
                }
            }else{
              if(st.empty() || st.top() != '{'){
                  return false;
              }else{
                 st.pop();
              }
           }    
        }
        return st.empty();
     }   
};