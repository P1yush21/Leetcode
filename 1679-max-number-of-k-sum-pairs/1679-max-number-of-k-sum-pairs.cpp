class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            int avg = k-nums[i];
            if(mp[avg] > 0){
                mp[avg]--;
                count++;
            }
            else mp[nums[i]]++;
        }
        return count;
    }
};