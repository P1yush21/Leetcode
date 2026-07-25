class Solution {
public:
    int maxProduct(int n) {
        int mx = 0;
        int smax = 0;
        while(n>0){
            int digit = n%10;
            if(mx <= digit) {
                smax = mx;
                mx = digit;
            }
            else if(smax < digit) smax = digit;
            n/=10;
        }
        cout<<mx<<" "<<smax;
        return mx*smax;
    }
};