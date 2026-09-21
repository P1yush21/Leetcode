class Solution {
public:
    void solve(vector<vector<int>>& v, vector<int>& res, vector<int>& nums, int idx){
        if(idx==nums.size()) {
            v.push_back(res);
            return ;
        }
        res.push_back(nums[idx]);
        solve(v, res, nums, idx+1);
        res.pop_back();
        solve(v, res, nums, idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        vector<int> res;
        solve(v, res, nums, 0);
        vector<vector<int>> ans;
        for (auto row : v) {
            if (find(ans.begin(), ans.end(), row) == ans.end()) {
                ans.push_back(row);
            }
        }
        return ans;
    }
};