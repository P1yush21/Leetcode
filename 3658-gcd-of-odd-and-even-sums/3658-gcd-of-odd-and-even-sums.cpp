class Solution {
public:
    int gcd(int nums1, int nums2){
        for(int i = min(nums1,nums2); i >= 1; i--){
            if(nums1%i==0 && nums2%i == 0) return i;
        }
        return 1;
    }
    int gcdOfOddEvenSums(int n) {
        // int sumEven = 0, oddSum = 0;
        // for(int i = 0; i <= 2*n; i++){
        //     if(i%2==0) sumEven += i;
        //     else oddSum += i;
        // }
        int sumEven = n*(n+1);
        int oddSum = n*n;
        return gcd(sumEven, oddSum);
    }
};