class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        int move = 0;
        vector<int> v(26);
        for(int i = 0; i < n; i++){
            v[s[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(v[i]>0) move++;
        }
        return move;
    }
};