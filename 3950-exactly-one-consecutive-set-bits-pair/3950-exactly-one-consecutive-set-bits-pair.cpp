class Solution {
public:
    bool consecutiveSetBits(int n) {
        string str ;
        while(n > 0){
            str.push_back(n%2+'0');
            n/=2;
        }
        reverse(str.begin(),str.end());
        int count = 0;
        for(int i = 1; i < str.size(); i++){
            if(str[i] == '1' && str[i-1]=='1'){
                count++;
            }
            if(count>1 && str[i] == '1' && str[i-1]=='1') return false;
        }
        if(count==0) return false;
        return true;
    }
};


// class Solution {
// public:
//     bool consecutiveSetBits(int n) {
//         string result = "";
//         while(n>0){
//             if(n%2==0) result = '0' + result;
//             else result = '1' + result;
//             n=n>>1;
//         }
//         cout<<result;
//         for(int i = 1; i < result.size(); i++){
//             if(result[i] == '1' && result[i-1] == '1') return true;
//         }
//         return false;
//     }
// };