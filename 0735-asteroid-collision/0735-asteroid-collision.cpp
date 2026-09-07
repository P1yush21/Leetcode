class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n = ast.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (ast[i] > 0)
                st.push(ast[i]);
            else {
                bool flag = false;
                while (st.size() > 0 && st.top() > 0) {
                    if (abs(st.top()) < abs(ast[i])) {
                        st.pop();
                    } else if (abs(st.top()) > abs(ast[i])) {
                        flag = true;
                        break;
                    } else {
                        flag = true;
                        st.pop();
                        break;
                    }
                }
                if (flag == false)
                    st.push(ast[i]);
            }
        }
        vector<int> v;
        while (st.size() > 0) {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};