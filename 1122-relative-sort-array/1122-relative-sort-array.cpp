class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n ; i++){
            mp[arr1[i]]++;
        }
        vector<int>v;
        for(int i = 0; i < arr2.size(); i++){
            int nums = arr2[i];
            while(mp[nums] > 0){
                v.push_back(nums);
                mp[nums]--;
            }
        }
        vector<int>remaining;
        for(auto x : mp){
            if(x.second>0){
                while(x.second > 0){
                    remaining.push_back(x.first);
                    x.second--;
                }
            }
        }
        sort(remaining.begin(), remaining.end());
        for(int i = 0; i < remaining.size(); i++){
            v.push_back(remaining[i]);
        }
        return v;
    }
};