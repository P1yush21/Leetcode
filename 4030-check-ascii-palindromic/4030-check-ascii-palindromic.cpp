class Solution {
public:
    bool isPalindromic(string s) {
        vector<int> v(s.size());
        for(int i = 0; i < s.size(); i++){
            int ptr = s[i];
            v[i] = ptr;
        }
        string str = "";
        for(int i = 0; i < v.size(); i++){
            string rem="";
            int x = v[i];
            while(x>0){
                int n = x%2;
                rem += char('0'+ n);
                x/=2;
            }
            reverse(rem.begin(),rem.end());
            while(rem.size()<8){
                rem = '0'+rem;
            }
            str += rem;
        }
        cout<<str;
        int i = 0, j = str.size()-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};