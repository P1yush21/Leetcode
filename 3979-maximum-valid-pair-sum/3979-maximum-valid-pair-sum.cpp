class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>v(n);
        v[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            v[i] = max(nums[i],v[i+1]);
        }
        int i = 0;
        int j = k,ans = 0;
        while(j < n){
            ans = max(ans,nums[i]+v[j]);
            i++;
            j++;
        }
        return ans;
    }
};