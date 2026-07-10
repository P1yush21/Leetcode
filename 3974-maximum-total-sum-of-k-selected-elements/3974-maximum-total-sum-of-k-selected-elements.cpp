class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n = nums.size();
        long long sum = 0;
        long long resMul = 1;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int j = 0;
        for(int i = 0; i < k; i++){
            resMul = 1ll*nums[i]*mul;
            mul--;
            sum += resMul;
            j++;
            if(mul<=0) break;
        }
        if(j < k){
            for(int i = j; i < k; i++){
                sum+=nums[i];
            }
        }
        return sum;
    }
};