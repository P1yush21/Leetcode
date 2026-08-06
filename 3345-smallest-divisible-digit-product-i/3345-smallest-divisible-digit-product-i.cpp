class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n; i < 101; i++){
            int mul = 1;
            int dup = i;
            while(dup>0){
                int digit = dup%10;
                mul*=digit;
                dup/=10;
            }
            if(mul%t==0) return i;
        }
        return 0;
    }
};