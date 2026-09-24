class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i]>9){
                int x = nums[i];
                int internalSum = 0;
                while(x>0){
                    int digit = x%10;
                    internalSum += digit;
                    x/=10; 
                }
                if(internalSum==i) return i;
            }
            else if (nums[i]==i) return i;
        }
        return -1;
    }
};