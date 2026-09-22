class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& copy, vector<int>& v, int idx, int k){
        if(copy.size()==k){
            ans.push_back(copy);
            return ;
        }
        if(idx == v.size()) {
            return;
        }
        copy.push_back(v[idx]);
        solve(ans, copy, v, idx+1, k);
        copy.pop_back();
        solve(ans, copy, v, idx+1, k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v(n);
        for(int i = 1; i <= n; i++){
            v[i-1] = i;
        }
        vector<vector<int>> ans;
        vector<int>copy;
        int idx = 0;
        solve(ans, copy, v, idx, k);
        return ans;
    }
};