class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int sum = 0;
            int copy = num;
            while(copy>0){
                int digit = copy%10;
                sum += digit;
                copy/=10;
            }
            num = sum;
        }
        return num;
    }
};