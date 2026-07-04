class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 1;
        int mn = nums[0];
        for(int i = 1; i < n; i++){
            // if(nums[i]-nums[i-1] >= k) count++;
            if(nums[i]-mn > k) {
                count++;
                mn = nums[i];
            }
        }
        return count;
    }
};