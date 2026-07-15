class Solution {
public:
    int gcd(int nums1, int nums2){
        for(int i = max(nums1,nums2); i >= 0; i--){
            if(nums1%i==0 && nums2%i == 0) return i;
        }
        return 0;
    }
    int gcdOfOddEvenSums(int n) {
        int sumEven = 0, oddSum = 0;
        for(int i = 0; i <= 2*n; i++){
            if(i%2==0) sumEven += i;
            else oddSum += i;
        }
        return gcd(sumEven, oddSum);
    }
};