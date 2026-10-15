class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                vector<int>v(101,0);
                for(int k = i; k <= j; k++){
                    v[nums[k]]++;
                }
                int count = 0;
                for(int k = 1; k < 101; k++){
                    if(v[k]>0) count++;
                }
                sum += count* count;
            }
        }
        return sum;
    }
};