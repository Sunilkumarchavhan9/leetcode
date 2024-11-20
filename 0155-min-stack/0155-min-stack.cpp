class MinStack {
public:
  int ar[30001];
  int i;
  MinStack() {
      i = -1; 
    }
    
    void push(int val) {
        i++;
        ar[i] = val;
    }
    
    void pop() {
      if(i == -1) return;
      else{
        i--;
      }
    }
    int top() {
      if(i == -1) return-1;
      else{
        return ar[i];
      }
    }
    
    int getMin() {
        int ans = INT_MAX;
      for(int j=0; j<=i; j++){
        ans = min(ans, ar[j]);
      }
      return ans;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */