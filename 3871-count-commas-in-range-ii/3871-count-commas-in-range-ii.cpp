class Solution {
public:
    long long solve(long long dup, int mul){
        long long res = 1;
        for(int i = 0; i < mul; i++){
            res *=1000;
        }
        if(dup < res) return 0;
        return dup-res+1;
    }
    long long countCommas(long long n) {
        int count = 0;
        long long dup = n;
        while(dup>0){
            int digit = dup%10;
            count++;
            dup/=10;
        }
        long long ans = 0;
        for(int i = 1; i < count/3+1; i++){
            ans += solve(n, i);
        }
        return ans;
    }
};