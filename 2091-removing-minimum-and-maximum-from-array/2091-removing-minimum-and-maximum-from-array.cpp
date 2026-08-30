class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = *min_element(nums.begin(),nums.end()); 
        int mx = *max_element(nums.begin(),nums.end()); 
        int a = 0;
        int b = 0;
        for(int i = 0; i < n; i++){
            if(mx==nums[i]) a = i+1;
            if(mn==nums[i]) b = i+1;
        }
        int c=n-a+1;
        int d=n-b+1;
        return min({max(a,b),max(c,d),min(a+d,b+c)});
    }
};