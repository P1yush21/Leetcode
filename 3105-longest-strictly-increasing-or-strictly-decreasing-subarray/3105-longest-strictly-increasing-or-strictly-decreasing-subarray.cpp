class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int mx=INT_MIN;
        for(int i = 0; i < n; i++){
            int len = 0;
            int j = i+1;
            while(j < n){
                if(nums[j]>nums[j-1]) j++;
                else break;
            }
            len = max(j-i,len);
            int k = i+1;
            while(k < n){
                if(nums[k-1]>nums[k]) k++;
                else break;
            }
            len = max(k-i,len);
            mx = max(len, mx);
        }
        return mx;
    }
};