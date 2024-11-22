class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<int>st;
      for(string s : tokens){
        if(s  == "+" || s =="-" ||s == "*" ||s == "/"){
          int operand2 = st.top();st.pop();
          int operand1 = st.top(); st.pop();
          if(s == "+") st.push( operand1 +  operand2);
          if(s == "-") st.push( operand1 -  operand2);
          if(s == "*") st.push( operand1 * operand2);
          if(s == "/") st.push( operand1 /  operand2);
        }else{
          st.push(stoi(s));
        }
      }
      return st.top();
    }
};