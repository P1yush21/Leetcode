class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count = 0;
        int i = 0;
        int j = 0;
        vector<int>v(256);
        while(j < n){
            v[s[j]]++;
            while(v[s[j]]>1){
                v[s[i]]--;
                i++;
            }
            count = max(count,j-i+1);
            j++;
        }
        return count;
    }
};