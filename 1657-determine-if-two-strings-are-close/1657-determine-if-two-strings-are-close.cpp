class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.size()!=str2.size()) return false;
        unordered_map<char,int> mp1,mp2;
        for(int i = 0; i < str1.size(); i++){
            mp1[str1[i]]++;
            mp2[str2[i]]++;
        }
        for(auto x : mp1){
            char ch = x.first;
            if(mp2.find(ch)==mp2.end()) return false;
        }
        unordered_map<int,int> h1,h2;
        for(auto x : mp1){
            h1[x.second]++;
        }
        for(auto x : mp2){
            h2[x.second]++;
        }
        for(auto x : h1){
            if(h2.find(x.first)==h2.end()) return false;
            if(h2[x.first]!=h1[x.first]) return false;        
        }
        return true;
    }
};