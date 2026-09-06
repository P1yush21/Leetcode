class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        int open = 0, close = 0;
        stack<int>st;
        for(int i = 0; i < n; i++){
            if(s[i]=='('){
                st.push(i);
   
            }
            else if(s[i]==')'){
                if(st.size()>0) st.pop();
                else if(st.size()==0 && s[i]==')') {
                    s[i]='#'; 
                }
            }
        }
        while(st.size()>0){
            s[st.top()] = '#';
            st.pop();
        }
        string str = "";
        for(int i = 0; i < n; i++){
            if(s[i]!='#') str+=s[i];
        }
        return str;
    }
};