class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long low = 1;
        long long high = 1LL * n * min(a, b);
        long long ans = 0;
        long long l = lcm(a,b);
        int MOD = 1e9+7;
        while(low<=high){
            long long mid = low+(high-low )/2;
            long long count = mid/a + mid/b - mid/l;
            if(count >= n){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans%MOD;
    }
};