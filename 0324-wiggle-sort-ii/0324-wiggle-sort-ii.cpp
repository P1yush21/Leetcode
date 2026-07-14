class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int>v(n);
        int mid = (n + 1) / 2;
        reverse(nums.begin(),nums.begin()+mid);
        reverse(nums.begin()+mid,nums.end());
        int i = 0, j = mid,k = 0;
        while (i < mid && j < n) {
            v[k++] = nums[i++];
            v[k++] = nums[j++];
        }
        while (i < mid) {
            v[k++] = nums[i++];
        }
        for(int i = 0; i < n; i++){
            nums[i] = v[i];
        }
    }
};