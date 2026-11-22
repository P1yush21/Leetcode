class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(st.size()>0 && st.top()=='b' && s[i]=='a') return false;
            st.push(s[i]);
        }
        return true;
    }
};