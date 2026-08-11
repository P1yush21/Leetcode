class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum1 = nums[0];
        int sum2 = 0;
        for(int i = 1; i < n; i++){
            if(nums[i]-1==nums[i-1]){
                sum1 += nums[i];
            }
            else break;
        }
        for(int i = 0; i < n; i++){
            sum2 += nums[i];
        }
        vector<int>v(sum2+1,0);
        for(int i = 0; i < n; i++){
            v[nums[i]]++;
        }
        for(int i = sum1; i <= sum2; i++){
            if(v[i]==0) return i;
        }
        return sum2+1;
    }
};