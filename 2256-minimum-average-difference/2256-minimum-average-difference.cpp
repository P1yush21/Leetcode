class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long>prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1]+nums[i];
        }
        long long total = prefix[n-1];
        long long mn = LLONG_MAX;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long first = prefix[i] / (i+1);
            long long second =0;
            if(i!=n-1) (second = (total-prefix[i])/(n-i-1));
            else second= 0;
            long long diff = llabs(first-second);
            if(diff < mn){
                mn = diff;
                ans = i;
            }
        }
        return ans;
    }
};