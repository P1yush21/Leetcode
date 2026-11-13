class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>str;
        stack<int>st;
        int j = 0;
        for(int i = 1; i <= n; i++){
            st.push(i);
            str.push_back("Push");
            if(i==target[j]) j++;
            else{
                st.pop();
                str.push_back("Pop");
            }
            if(j==target.size()) return str;
        }

        return str;
    }
};