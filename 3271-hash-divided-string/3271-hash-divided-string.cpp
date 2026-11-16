class Solution {
public:
    string stringHash(string s, int k) {
        string str = "";
        for(int i = 0; i < s.size(); i+=k){
            int num = 0;
            for(int j = i; j < i+k; j++){
                num += s[j]-'a';
            }
            num = num%26;
            cout<<num;
            str+=num+'a';
        }
        return str;
    }
};