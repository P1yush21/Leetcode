class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            int ans = nums[i];
            for(int j = i; j < n; j++){
                ans = gcd(ans, nums[j]);
                if(ans == k) count++;
                
            }
        }
        return count ;
    }
};