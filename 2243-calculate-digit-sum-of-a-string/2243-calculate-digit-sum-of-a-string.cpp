class Solution {
public:
    string solve(string& s, int k, string ptr){
        if(s.size()<=k) return s;
        for(int i = 0; i < s.size(); i+=k){
            int sum = 0;
            for(int j = i; j < min(i+k, (int)s.size()); j++){
                sum += s[j]-'0';
            }
            ptr += to_string(sum);
        }
        return solve(ptr,k,"");
    }
    string digitSum(string s, int k) {
        int n = s.size();
        string str = solve(s, k, "");
        return str;
    }
};