class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(),nums.end());
        int mid = nums[n/2];
        for(int i = 0; i < nums.size(); i++){
            count += abs(mid-nums[i]);
        }
        return count;
    }
};