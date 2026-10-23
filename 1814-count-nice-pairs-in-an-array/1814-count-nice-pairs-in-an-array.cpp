class Solution {
public:
    int rev (int n){
        int ans = 0;
        while(n>0){
            int digit = n%10;
            ans = ans*10 + digit;
            n/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        unordered_map<int,int> mp;

        for(int i = 0; i < n; i++){
            nums[i] -= rev(nums[i]);
        }
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            long long f = x.second;
            count = (count+f*(f-1)/2)%1000000007;
        }
        return count;
    }
};