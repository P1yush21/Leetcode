class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(st.size()==0 && s[i]=='#') continue; 
            if(st.size()>0 && s[i]=='#') st.pop();
            else st.push(s[i]);
        }
        while(st.size()>0) {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());

        stack<char> gt;
        string ptr = "";
        for(int i = 0; i < t.size(); i++){
            if(gt.size()==0 && t[i]=='#') continue;
            if(gt.size()>0 && t[i]=='#') gt.pop();
            else gt.push(t[i]);
        }
        while(gt.size()>0) {
            ptr += gt.top();
            gt.pop();
        }
        reverse(ptr.begin(),ptr.end());

        return str==ptr;
    }
};