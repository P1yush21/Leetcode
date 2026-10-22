class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& word) {
        int n = word.size();
        unordered_set<string>s;
        int count = 0;
        for(int i = 0; i < n; i++){
            s.insert(word[i]);
        }
        for(int i = 0; i < n; i++){
            string rev = word[i];
            reverse(rev.begin(), rev.end());
            if(word[i]==rev) continue;
            if(s.find(rev)!=s.end()) {
                count++;
                s.erase(word[i]);
            }
        }
        return count;
    }
};