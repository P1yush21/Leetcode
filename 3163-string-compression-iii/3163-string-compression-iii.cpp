class Solution {
public:
    string compressedString(string word) {
        stack<char> st;
        string comp = "";
        st.push(word[0]);
        int n = word.size();
        for (int i = 1; i < n; i++) {
            if(st.size()==0){
                st.push(word[i]);
                continue;
            }
            if (st.top() == word[i]) {
                st.push(word[i]);
                if (st.size() == 9) {
                    char ch = st.size() + '0';
                    comp += ch;
                    comp += st.top();
                    while (st.size() > 0)
                        st.pop();
                }
            } else {
                int x = st.size();
                char ch = st.size() + '0';
                comp += ch;
                comp += st.top();
                while (st.size() > 0)
                    st.pop();
                st.push(word[i]);
            }
        }
        if(st.size()>0){
            int x = st.size();
            char ch = st.size() + '0';
            comp += ch;
            comp += st.top();
        }
        return comp;
    }
};