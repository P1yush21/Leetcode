class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        vector<int>prefixMax(n);
        prefixMax[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefixMax[i] = max(prefixMax[i-1], nums[i]);
        }
        mx = INT_MIN;
        vector<int>suffixMax(n);
        suffixMax[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            suffixMax[i] = max(suffixMax[i+1], nums[i]);
        }

        long long sum = 0;
        long long ans = 0;
        for(int i = 1;i < n-1; i++){
            sum = 1ll*(prefixMax[i-1]-nums[i])*suffixMax[i+1];
            ans = max(ans,sum);
        }
        return ans;
    }
};