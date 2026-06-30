class MinStack {
public:
stack<int> st;
std::stack<int> min_st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (min_st.empty() || val <= min_st.top()) 
            min_st.push(val);
        
    }
    
    void pop() {
         if (st.top() == min_st.top()) 
            min_st.pop();
        
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
