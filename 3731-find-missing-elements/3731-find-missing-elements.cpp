class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n-1; i++){
            if(nums[i+1]-nums[i] != 1){
                for(int j = nums[i]+ 1; j < nums[i+1]; j++){
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};