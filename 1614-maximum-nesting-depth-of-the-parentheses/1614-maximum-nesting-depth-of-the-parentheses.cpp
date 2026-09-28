class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int count = 0, maxCount = INT_MIN;
        for(int i = 0; i < n; i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};