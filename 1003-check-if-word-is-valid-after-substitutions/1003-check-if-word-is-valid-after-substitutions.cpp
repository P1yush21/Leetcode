class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        for(int i = 0 ; i < n; i++){
            st.push(s[i]);
            bool flag = false;
            string str = "";
            if(st.size()>=3){
                for(int j = 0; j < 3; j++){
                    str+=st.top();
                    st.pop();
                }
                reverse(str.begin(),str.end());
                if(str == "abc") flag=true;
            }
            if(flag==false && str.size()==3){
                for(int j = 0; j < 3; j++){
                    st.push(str[j]);
                }
            }
        }
        if(st.size()==0) return true;
        return false;
    }
};