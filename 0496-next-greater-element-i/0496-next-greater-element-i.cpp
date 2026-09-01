class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        stack<int>st;
        vector<int>v(m);
        st.push(v[m-1]);
        for(int i = m-1; i >= 0; i--){
            while(st.size()>0 && st.top()<=nums2[i]) st.pop();

            if(st.size()==0) v[i]=-1;
            else v[i] = st.top();

            st.push(nums2[i]);
        }
        vector<int>ans;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(v[j]);
                    break;
                }
            }
        }
        return ans;
    }
};