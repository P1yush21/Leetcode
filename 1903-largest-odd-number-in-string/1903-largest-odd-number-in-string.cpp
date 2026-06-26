class Solution {
public:
    bool odd(int nums){
        return !(nums == '1' || nums == '3' || nums == '5' || nums == '7' || nums == '9');
    }
    string largestOddNumber(string nums) {
        int n = nums.size();
        int idx = -1;
        int count = 0;
        for(int i = n-1; i >= 0; i--){
            if(odd(nums[i])) {
                nums.pop_back();
            }
            else count++;
            if(count > 0) break;
        }
        return nums;
    }
};