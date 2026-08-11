class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i]-1==nums[i-1]){
                sum+=nums[i];
            }
            else break;
        }
        vector<int>v(1276,0);
        for(int i = 0; i < n; i++){
            v[nums[i]]++;
        }
        for(int i = sum; i <= 1276; i++){
            if(v[i]==0) return i;
        }
        return 0;
    }
};