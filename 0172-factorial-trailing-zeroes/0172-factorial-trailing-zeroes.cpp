class Solution {
public:
    int trailingZeroes(int n) {
        // long long count = 0;
        // long long fact = 1;
        // for(int i = 1; i <= n; i++){
        //     fact*=i;
        // }
        // cout<<fact;
        // while(true){
        //     if(fact%10!=0) break;
        //     count++;
        //     fact=fact/10;
        // }
        int count = 0;
        while (n > 0) {
            n /= 5;
            count += n;
        }
        return count;
    }
};