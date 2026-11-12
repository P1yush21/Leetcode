class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string>str1;
        vector<string>str2;
        vector<string>ans;
        string s = "";
        for(int i = 0; i < s1.size(); i++){
            if(s1[i]==' '){
                str1.push_back(s);
                s = "";
            }
            else s+=s1[i];
        }
        if(!s.empty()) str1.push_back(s);
        s = "";
        for(int i = 0; i < s2.size(); i++){
            if(s2[i]==' '){
                str2.push_back(s);
                s = "";
            }
            else s+=s2[i];
        }
        if(!s.empty()) str2.push_back(s);
        for(int i = 0; i < str1.size(); i++){
            mp[str1[i]]++;
        }
        for(int i = 0; i < str2.size(); i++){
            mp[str2[i]]++;
        }
        for(auto x : mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};