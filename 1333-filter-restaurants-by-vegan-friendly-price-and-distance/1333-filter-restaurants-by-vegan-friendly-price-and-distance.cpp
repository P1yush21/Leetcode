class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& res, int vf, int maxPrice, int maxDistance) {
        vector<int>ans;
        int n = res.size();
        int m = res[0].size();
        vector<pair<int,int>>v;
        for(int i = 0; i < n; i++){
            if((vf == 1 && res[i][2] == 0) || maxPrice < res[i][3] || maxDistance < res[i][4]) continue;
            v.push_back({res[i][1],res[i][0]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i = 0; i < v.size(); i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};