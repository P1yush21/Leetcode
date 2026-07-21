class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> v;
        for(int i = 0 ; i < n; i++){
            if(s[i]==c) v.push_back(i);
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int dist = INT_MAX;
            for(int j = 0; j < v.size(); j++){
                dist = min(dist, abs(i-v[j]));
            }
            ans.push_back(dist);
        }
        return ans;
    }
};