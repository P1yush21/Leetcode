class Solution {
public:
    string clearDigits(string s) {
        int n = s.size();
        string str = "";
        stack<char>st;
        for(int i = 0; i < n; i++){
            if(s[i]>='a' && s[i]<='z') st.push(s[i]);
            else st.pop();
        }
        while(st.size()>0){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};