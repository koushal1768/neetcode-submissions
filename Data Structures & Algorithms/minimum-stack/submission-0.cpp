class MinStack {
public:
        stack<int>st;
        stack<int>mini;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(mini.size()==0) mini.push(val);
        else if(mini.size()&&val>=mini.top()) mini.push(mini.top());
        else mini.push(val);
    }
    
    void pop() {
        st.pop();
        mini.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
