class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            v[i] = nums[n-1];    
        }
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++){
            if(v[i]%2==0) even++;
            else odd++;
        }
        if(even==n || odd==n) return true;
        else return false;
    }
};