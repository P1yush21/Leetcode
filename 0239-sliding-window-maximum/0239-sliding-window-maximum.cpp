class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // int n = nums.size();
        // vector<int> v;
        // for(int i = 0; i <= n-k; i++){
        //     int count = 0;
        //     int mx = INT_MIN;
        //     for(int j = i ; count < k; j++){
        //         mx = max(nums[j],mx);
        //         count++;
        //     }
        //     v.push_back(mx);
        // }


        int n = nums.size();
        vector<int> v(n);
        stack<int>st;
        v[n-1] = n;
        st.push(n-1);
        for(int i = n-2; i >= 0; i--){
            while(st.size()>0 && nums[st.top()] <= nums[i]) st.pop();
            if(st.size()==0) v[i] = n;
            else v[i] = st.top();
            st.push(i);
        }
        vector<int>ans;
        for(int i = 0; i <= n-k; i++){
            int j = i;
            int mx = nums[i];
            while(j < i+k){
                mx = nums[j];
                j=v[j];
            }
            ans.push_back(mx);
        }
        return ans;
    }
};