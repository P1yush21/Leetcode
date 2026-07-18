class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int res = INT_MAX;
        for(int i = 0; i < n; i++){
            int mx = INT_MIN;
            int mn = INT_MAX;
            for(int j = 0; j <= i; j++){
                mx = max(mx, nums[j]);
            }
            for(int k = i; k < n; k++){
                mn = min(mn, nums[k]);
            }
            if(mx-mn <= k){
                res = min(res, i);
            }
        }
        return res==INT_MAX?-1:res;
    }
};