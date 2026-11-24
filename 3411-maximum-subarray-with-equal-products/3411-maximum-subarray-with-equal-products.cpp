class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            long long prod = 1;
            int l = 1;
            int g = 0;
            for(int j = i; j < n; j++){
                prod *= nums[j];
                l = lcm(l,nums[j]);
                g = gcd(g,nums[j]);
                if (prod > 25200) break;
                if(prod == 1LL * g*l) ans = max(ans, j-i+1);
            }
        }
        return ans;
    }
};