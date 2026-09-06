class Solution {
public:
    int evalRPN(vector<string>& token) {
        int n = token.size();
        stack<int>st;
        for(int i = 0; i < n; i++){
            if(token[i]=="+"){
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop() ;
                st.push(val1+val2);
            }
            else if(token[i]=="-"){
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop() ;
                st.push(val1-val2);
            }
            else if(token[i]=="*"){
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop() ;
                st.push(val1*val2);
            }
            else if(token[i]=="/"){
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop() ;
                st.push(val1/val2);
            }
            else {
                st.push(stoi(token[i]));
            }
        }
        return st.top();
    }
};