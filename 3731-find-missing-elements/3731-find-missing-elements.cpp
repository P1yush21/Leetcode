class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        // vector<int>v;
        // sort(nums.begin(),nums.end());
        // for(int i = 0; i < n-1; i++){
        //     if(nums[i+1]-nums[i] != 1){
        //         for(int j = nums[i]+ 1; j < nums[i+1]; j++){
        //             v.push_back(j);
        //         }
        //     }
        // }
        // return v;

        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        vector<int>v(101,0);
        vector<int>ans;
        for(int i = 0; i < n; i++){
            v[nums[i]]++;
        }
        for(int i = mn; i <= mx; i++){
            if(v[i]==0) ans.push_back(i);
        }
        return ans;
    }
};