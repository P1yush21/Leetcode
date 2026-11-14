class Solution {
public:
    vector<string> topKFrequent(vector<string>& word, int k) {
        int n = word.size();
        unordered_map<string, int> mp;
        for(int i = 0; i < n; i++){
            mp[word[i]]++;
        }
        int mx = word.size();
        vector<string>v;
        while(mx>0){
            vector<string>temp;
            for(auto x : mp){
                if(x.second == mx) temp.push_back(x.first);
            }
            sort(temp.begin(), temp.end());
            for(int i = 0; i < temp.size(); i++){
                v.push_back(temp[i]);
                if(v.size()==k) break;
            }
            if(v.size()==k) break;
            mx--;
        }
        return v;
    }
};