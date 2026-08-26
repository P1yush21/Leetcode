class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int count = 0;
        string ans = "";
        while(j<n){
            if(count<=k){
                if(s[j]=='1')count++;
            }
            j++;
            while(count>=k){
                if(count==k){
                    string temp = s.substr(i,j-i);
                    if(ans == "" || temp.size() < ans.size() || (temp.length() == ans.length() && temp < ans)){
                        ans=temp;
                    }
                }
                if(s[i]=='1')count--;
                i++;
            }
            
        }
        cout<<ans;
        return ans;
    }
};