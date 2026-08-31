class Solution {
public:
    string makeGood(string s) {
        stack<int> st;
        for(int i = 0; i < s.size(); i++){
            if(st.size()>0 && abs(st.top() - s[i]) == 32){
                st.pop();
            }
            else st.push(s[i]);
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