class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int mx = INT_MIN;
        int n = nums.size();
        int i = 0;
        int count = 0;
        while(i<n){
            mx = max(nums[i], mx);
            if(mx==i) count++;
            i++;
        }
        return count;
    }
};