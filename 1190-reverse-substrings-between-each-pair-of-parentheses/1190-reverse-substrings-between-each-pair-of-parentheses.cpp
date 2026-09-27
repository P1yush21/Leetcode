class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i]!=')') st.push(s[i]);
            else{
                string str = "";
                while(st.top()!='('){
                    str += st.top();
                    st.pop();
                }
                st.pop();
                for(int i = 0; i < str.size(); i++){
                    st.push(str[i]);
                }
            }
        }
        string str = "";
        while(st.size()>0){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};