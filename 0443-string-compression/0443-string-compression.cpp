class Solution {
public:
    int compress(vector<char>& chars) {
        stack<char> st;
        vector<char> v;
        // vector<int>len;
        int n = chars.size();
        st.push(chars[0]);
        for (int i = 1; i < n; i++) {
            if (st.top() == chars[i])
                st.push(chars[i]);
            else {
                int x = st.size();
                v.push_back(st.top());
                if (x > 1) {
                    string s = to_string(x);
                    for (char c : s) {
                        v.push_back(c);
                    }
                }
                while (st.size() > 0)
                    st.pop();
                st.push(chars[i]);
            }
        }
        int x = st.size();
        v.push_back(st.top());
        if (x > 1) {
            string s = to_string(x);
            for (char c : s) {
                v.push_back(c);
            }
        }
        for (int i = 0; i < v.size(); i++) {
            chars[i] = v[i];
        }
        return v.size();
    }
};