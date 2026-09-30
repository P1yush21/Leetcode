class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int n = s.size();
        stack<int>st;
        vector<int>v;
        for(int i = 0; i < n; i++){
            if(s[i]=='(') {
                if(st.size()%2==0){
                    st.push(0);
                    v.push_back(0);
                }
                else{
                    st.push(1);
                    v.push_back(1);
                }
            }
            else{
                v.push_back(st.top());
                st.pop();
            }
        }
        return v;
    }
};