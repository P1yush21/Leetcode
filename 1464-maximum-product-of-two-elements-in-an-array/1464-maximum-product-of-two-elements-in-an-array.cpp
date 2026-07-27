class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int smax = 0;
        for(int i = 0; i < n; i++){
            if(mx < nums[i]){
                smax = mx;
                mx = nums[i];
            }
            else if(smax < nums[i]) smax = nums[i];
        }
        return (mx-1)*(smax-1);
    }
};