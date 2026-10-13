class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> res(n);
        int j = n-1;
        vector<int> ver(n);
        for(int i = 0; i < n; i++){
            ver[i] = abs(nums[i]);
        }
        sort(ver.begin(),ver.end());
        for(int i = 0; i < n; i+=2){
            res[i]=ver[j];
            j--;
        }
        j=0;
        for(int i = 1; i < n; i+=2){
            res[i]=ver[j];
            j++;
        }

        long long oddSum = 0, evenSum = 0;
        for(int i = 0; i < n; i++){
            long long num = res[i]*res[i];
            if(i%2==0) evenSum += num;
            else oddSum += num;
        }
        return evenSum-oddSum;
        
    }
};