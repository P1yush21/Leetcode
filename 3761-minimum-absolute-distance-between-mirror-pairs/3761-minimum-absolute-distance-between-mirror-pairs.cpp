class Solution {
public:
    int reverseNum(int n) {
        int ans = 0;
        while (n > 0) {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int mn = INT_MAX;
        for (int j = 0; j < nums.size(); j++) {
            int val = reverseNum(nums[j]);
            if (mp.find(nums[j]) != mp.end()) {
                mn = min(mn, j - mp[nums[j]]);
            }
            mp[val] = j;
        }

        return mn == INT_MAX ? -1 : mn;
    }
};