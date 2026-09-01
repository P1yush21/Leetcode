class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i = 0; i < n; i++){
            int mx = INT_MIN;
            for(int j = i+1; j < n; j++){
                if(nums[j]>nums[i]){
                    mx = nums[j];
                    break;
                }
            }
            if(mx==INT_MIN){
                for(int j = 0; j < n; j++){
                    if(nums[j]>nums[i] && i!=j){
                        mx = nums[j];
                        break;
                    }
                }
            }
            if(mx==INT_MIN) v.push_back(-1);
            else v.push_back(mx);
        }
        return v;
    }
};