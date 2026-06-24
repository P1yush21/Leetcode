class Solution {
public:
    vector<string> stringSequence(string target) {
        int n = target.size();
        vector<string> str;
        string ans;
        for(int i = 0; i < n; i++){
            ans.push_back('a');   
            str.push_back(ans);
            char ch = 'a';
            if(ch != target[i]){
                while(ch != target[i]){
                    ch++;
                    ans[i]++;
                    str.push_back(ans);
                }
            }
        }
        return str;
    }
};