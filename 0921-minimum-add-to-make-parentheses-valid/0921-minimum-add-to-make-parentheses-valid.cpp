class Solution {
public:
    int minAddToMakeValid(string s) {
        // int n = s.size();
        // int open = 0;
        // int close = 0;
        // for(int i = 0; i < n; i++){
        //     if(s[i]=='(') open++;
        //     else{
        //         if(open > 0) open--;
        //         else close++;
        //     }
        // }
        // return open + close;

        int n = s.size();
        stack<int>st;
        for(int i = 0; i < n; i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(st.size()>0 && st.top()=='(' && s[i]==')') st.pop();
                else st.push(s[i]);
            }
        }
        return st.size();
    }
};