class Solution {
public:
    int gcd(int num1, int num2){
        // for(int i = min(num1,num2); i >= 1; i--){
        //     if(num1%i==0 && num2%i==0) return i;
        // }
        // return 1;
        if(num2 == 0) return num1;
        return gcd(num2, num1 % num2);
    }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        long long mx = nums[0];
        vector<long long>prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i]>mx){
                mx = nums[i];
            }
            prefix[i] = gcd(mx,nums[i]);
        }
        sort(prefix.begin(),prefix.end());
        long long sum = 0;
        int i = 0;
        int j = n-1;
        while(i < j){
            sum += gcd(prefix[i],prefix[j]);
            i++;
            j--;
        }
        return sum;
    }
};