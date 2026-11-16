class Solution {
public:
    int solve(vector<int>& nums){
        if(nums.size()==1) return nums[0];
        vector<int> v;
        for(int i = 1; i < nums.size(); i++){
            int sum = nums[i]+nums[i-1];
            v.push_back(sum%10);
        }
        return solve(v);
    }
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        int digit = solve(nums);
        return digit;
    }
};