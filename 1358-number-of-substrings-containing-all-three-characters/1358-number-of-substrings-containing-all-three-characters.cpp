class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        vector<int>v(3);
        int count = 0;
        int mxCount = 0;
        while(j < n){
            v[s[j]-'a']++;
            while(v[0] > 0 && v[1] > 0 && v[2] > 0){
                count += n-j;
                v[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return count;
    }
};