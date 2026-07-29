class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int>v(26);
        for(int i = 0; i < n; i++){
            v[s[i]-'a']++;
        }
        string str(n,' ');
        int left = 0;
        int right = n-1;
        for(int i = 0; i < 26; i++){
            while(v[i]>=2){
                str[left] = i+'a';
                str[right] = i+'a';
                v[i] = v[i]-2;
                left++;
                right--;
            }
        }
        for(int i = 0; i < 26; i++){
            if(v[i]==1) str[n/2] = i+'a';
        }
        return str;
    }
};