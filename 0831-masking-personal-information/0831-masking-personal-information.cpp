class Solution {
public:
    string maskPII(string s) {
        int n = s.size();
        string str;
        string ptr;
        bool email = false;
        bool number = false;
        if((s[0] >= 'A' && s[0]<='Z') || (s[0] >= 'a' && s[0]<='z')){
            email = true;
            for(int i = 0; i < n; i++){
                if(s[i]>='A' && s[i] <= 'Z') s[i] = s[i]+32; 
            }
            str.push_back(s[0]);
            str+="*****";
            int aindex = 0;
            for(int i = 0; i < n; i++){
                if(s[i]=='@'){
                    aindex = i;
                    break;
                }
            }
            for(int i = aindex-1; i < n; i++){
                str.push_back(s[i]);
            }
        }
        else{
            int count = 0;
            number = true;
            for(int i = n-1; i >= 0; i--){
                if(s[i]>='0' && s[i]<='9' && count<=4) {
                    ptr.push_back(s[i]);
                    count++;
                }
                if(count == 4) break;
            }
            reverse(ptr.begin(),ptr.end());
            count = 0;
            for(int i = 0; i < n; i++){
                if(s[i]>='0' && s[i]<='9'){
                    count++;
                }
            }
            string num;
            if(count == 10) num += "***-***-";
            else if(count == 11) num += "+*-***-***-";
            else if(count == 12) num += "+**-***-***-";
            else num += "+***-***-***-";
            ptr = num + ptr;
        }
        if(email) return str;
        return ptr;
    }
};