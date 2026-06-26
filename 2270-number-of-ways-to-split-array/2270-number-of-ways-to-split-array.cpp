class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long  total = 0;
        for(int i = 0; i < n; i++){
            total+=nums[i];
        }
        long long  currSum = 0;
        int count = 0;
        for(int i = 0; i < n-1; i++){
            currSum += nums[i];
            long long  first = currSum;
            long long  second = total-currSum;
            if(first >= second) count++;
        }
        return count;
    }
};