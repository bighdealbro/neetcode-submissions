class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string token:tokens){
            if(isdigit(token[0]) || (token.size() > 1 && token[0] == '-')){
                st.push(stoi(token));
            }
            else{
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                if (token == "+") 
                    st.push(op2 + op1);
                else if (token == "-") 
                    st.push(op2 - op1);
                else if (token == "*") 
                    st.push(op2 * op1);
                else if (token == "/") 
                    st.push(op2 / op1);
                else if (token == "^") 
                    st.push((int)pow(op2, op1));
            }
        }
        return st.top();
    }
};
