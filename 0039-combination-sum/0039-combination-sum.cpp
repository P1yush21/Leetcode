class Solution {
public:
    void solve( vector<vector<int>>& res, vector<int>& candidates, int target,vector<int>& v, int idx){
        if(target==0){
            res.push_back(v);
            return;
        }
        if(target<0) return ;
        for(int i = idx; i < candidates.size(); i++){
            v.push_back(candidates[i]);
            solve(res, candidates, target-candidates[i], v, i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx = 0;
        vector<int>v;
        vector<vector<int>> res;
        solve(res, candidates, target, v, idx);
        return res;
    }
};