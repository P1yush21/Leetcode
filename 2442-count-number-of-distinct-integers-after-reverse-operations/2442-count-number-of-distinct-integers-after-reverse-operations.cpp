class Solution {
public:
    int reverse(int n){
        int ans = 0;
        while(n > 0){
            int digit = n%10;
            ans = ans*10 + digit;
            n/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i=0; i < n; i++){
            int rev = reverse(nums[i]);
            s.insert(rev);
            s.insert(nums[i]);
        }
        return s.size();
    }
};