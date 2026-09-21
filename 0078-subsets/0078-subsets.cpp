class Solution {
public:
    void print(vector<int>& nums, vector<vector<int>>& v, vector<int>& small, int idx) {
        if(idx == nums.size()){
            v.push_back(small);
            return;
        }
        print(nums, v, small, idx+1);
        small.push_back(nums[idx]);
        print(nums,v, small, idx+1);
        small.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        vector<int> small;
        print(nums, v, small, 0);
        return v;
    }
};