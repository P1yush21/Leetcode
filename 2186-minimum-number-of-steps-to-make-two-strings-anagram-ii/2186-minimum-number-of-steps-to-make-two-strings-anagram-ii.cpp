class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp1, mp2;
        for(int i = 0; i < s.size(); i++){
            mp1[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            mp2[t[i]]++;
        }
        int count = 0;
        for(auto x : mp1){
            if(mp2.find(x.first)!=mp2.end()){
                if(x.second > mp2[x.first]){
                    count += x.second - mp2[x.first];
                }
            }
            else count += x.second;
        }
        for(auto x : mp2){
            if(mp1.find(x.first)!=mp1.end()){
                if(x.second > mp1[x.first]){
                    count += x.second - mp1[x.first];
                }
            }
            else count += x.second;
        }
        return count;
    }
};