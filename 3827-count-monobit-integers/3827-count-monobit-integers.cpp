class Solution {
public:
    int countMonobit(int n) {
        int count = 0;
        for(int i = 0; i <= n; i++){
            string str;
            int x = i;
            while(x > 0){
                str.push_back(x%2+'0');
                x/=2;
            }
            int zero = 0;
            int one = 0;
            for(int j = 0; j < str.size(); j++){
                if(str[j]=='0') zero++;
                else one++;
            }
            if(zero==str.size()) count++;
            if(one==str.size()) count++;
        }
        return count-1;
    }
};