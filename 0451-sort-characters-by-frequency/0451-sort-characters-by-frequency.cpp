class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>> v;
        for(auto x : mp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(), v.end(), [](auto a, auto b){
            return a.second > b.second;
        });
        string str = "";
        for(auto x : v){
            for(int i = 0; i < x.second; i++){
                str += x.first;
            }
        }
        return str;
    }
};