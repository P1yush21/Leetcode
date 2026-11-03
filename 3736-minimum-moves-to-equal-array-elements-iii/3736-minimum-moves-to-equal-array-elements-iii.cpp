class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mx = *max_element(nums.begin(),nums.end());
        int count = 0;
        for(int ele : nums){
            count += mx-ele;
        }
        return count;
    }
};