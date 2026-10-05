class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<int> st;
        st.push(0);
        for (char c : s) {
            if (c == '(') {
                st.push(0);
            } else {
                int curr = st.top();
                st.pop();
                if (curr == 0) curr = 1; // ()
                else curr *= 2; // (A)
                st.top() += curr; // AB → A + B
            }
        }
        return st.top();
    }
};