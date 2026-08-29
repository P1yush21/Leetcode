class Solution {
public:
    int calPoints(vector<string>& o) {
        int n = o.size();
        stack<string> st;
        for(int i = 0; i < n; i++){
            if(o[i]=="C") st.pop();
            else if(o[i]=="D"){
                int val = stoi(st.top());
                st.push(to_string(2 * val));
            }
            else if(o[i]=="+"){
                string str = st.top();
                int val1 = stoi(st.top());
                st.pop();
                int val2 = stoi(st.top());
                int res = val1+val2;
                string s = to_string(res);
                st.push(str);
                st.push(s);
            }
            else st.push(o[i]);
        }
        int sum = 0;
        while(st.size()!=0){
            sum += stoi(st.top());
            st.pop();
        }
        return sum;
    }
};