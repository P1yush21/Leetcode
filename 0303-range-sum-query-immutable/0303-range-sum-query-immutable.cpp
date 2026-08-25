class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++){
            nums[i] = nums[i]+nums[i-1];
        }
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        if(left!=0){
            return nums[right]-nums[left-1];
        }
        return nums[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */