class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++){
            int idx = -1;
            int mx = -1;
            for(int j = 0; j < m; j++){
                if(nums1[i]==nums2[j]) {
                    idx=j;
                    break;
                }
            }
            for(int k = idx+1; k < m; k++){
                if(nums2[k]>nums1[i]){
                    mx = nums2[k];
                    break;
                }
            }
            v.push_back(mx);
        }
        return v;
    }
};