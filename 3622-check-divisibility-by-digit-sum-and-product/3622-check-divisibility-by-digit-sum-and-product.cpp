class Solution {
public:
    bool checkDivisibility(int n) {
        int dup = n;
        int sum = 0, prod = 1;
        while(dup>0){
            int digit = dup%10;
            sum += digit;
            prod *= digit;
            dup/=10;
        }
        return n%(sum+prod)==0? true: false;
    }
};