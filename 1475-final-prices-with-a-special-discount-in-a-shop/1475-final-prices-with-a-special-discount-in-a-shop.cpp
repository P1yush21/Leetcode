class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int>v(n);
        v[n-1] = nums[n-1];
        st.push(nums[n-1]);
        for(int i = n-2; i >= 0; i--){
            while(st.size()>0 && st.top() > nums[i])st.pop();
            if(st.size() == 0) {
                v[i] = nums[i];
                st.push(nums[i]);
            }
            else if(st.top() <= nums[i]) {
                v[i] = nums[i] - st.top();
                st.push(nums[i]);
            }
        }
        return v;
    }
};
