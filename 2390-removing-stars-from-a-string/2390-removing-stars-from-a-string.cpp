class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char>st;
        for(int i = 0; i < n; i++){
            if(s[i]!='*') st.push(s[i]);
            else{
                st.pop();
            }
        }
        s = "";
        while(st.size()>0){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};