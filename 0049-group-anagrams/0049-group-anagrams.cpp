class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        int n = nums.size();
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i = 0; i < n; i++){
            string lexo = nums[i];
            sort(lexo.begin(),lexo.end());
            if(mp.find(lexo)==mp.end()){
                vector<string>str;
                str.push_back(nums[i]);
                mp[lexo] = str;
            }
            else{
                mp[lexo].push_back(nums[i]);
            }
        }
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};