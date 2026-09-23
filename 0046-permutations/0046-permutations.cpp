class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> v,vector<int>& nums ,int idx){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            bool found = false;
            for(int j = 0; j < v.size(); j++) {
                if(v[j] == nums[i]) {
                    found = true;
                    break;
                }
            }
            if(found) continue;
            v.push_back(nums[i]);
            solve(ans, v, nums, 0);
            v.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(ans, v, nums, 0);
        return ans;
    }
};