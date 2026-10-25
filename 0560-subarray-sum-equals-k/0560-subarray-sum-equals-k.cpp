class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n);
        v[0] = nums[0];
        for(int i = 1; i < n; i++){
            v[i] = v[i-1]+nums[i];
        }
        int count = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            if(v[i] == k) count++;
            int rem = v[i]-k;
            if(mp.find(rem)!=mp.end()) count+= mp[rem];
            mp[v[i]]++;
        }
        return count;
    }
};