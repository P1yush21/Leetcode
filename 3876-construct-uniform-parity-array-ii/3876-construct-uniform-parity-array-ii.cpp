class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        int odd = 0, even = 0;
        int minEven = INT_MAX, minOdd = INT_MAX;
        for(int i = 0; i < n; i++){
            if(nums[i]%2==0) {
                even++;
                minEven = min(minEven, nums[i]);
            }
            else {
                odd++;
                minOdd = min(minOdd, nums[i]);
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i]%2==0 && minEven>minOdd) {
                v[i] = minEven-minOdd;
            }
            else {
                v[i] = nums[i];
            }
        }
        odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            if(v[i]%2==0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if(odd==n || even==n)return true;
        return false;
    }
};