class Solution {
public:
    bool helper(string s) {
        for (int i = 1; i < s.size(); i++) {
            if (s[i] < s[i - 1]) return false;
        }
        return true;
    }
    int minOperations(string s) {
        int n = s.size();
        bool flag = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] < s[i - 1]) {
                flag = true;
                break;
            }
        }
        if(!flag) return 0;
        if(n==2) return -1;
        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());
        if (s[0] == mn || s[n - 1] == mx)  return 1;
        bool minPrefix = false, maxSuffix = false;
        for(int i = 0; i < n-1; i++){
            if(s[i]==mn) minPrefix = true;
        }
        for(int i = 1; i < n; i++){
            if(s[i]==mx) maxSuffix = true;
        }
        if (!minPrefix && !maxSuffix) return 3;
        return 2;
    }
};