class Solution {
public:
    long long sumAndMultiply(int n) {
        long long res = 0,sum = 0,org = 0;
        while(n > 0){
            int digit = n%10;
            sum+=digit;
            if(digit!=0) res = res*10+digit;
            n/=10;
        }
        while(res > 0){
            int digit = res%10;
            org = org *10 + digit;
            res/=10;
        }
        return org*sum;
    }
};