class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>v = arr;
        sort(v.begin(),v.end());
        vector<int>numStore(v.size(),1);
        for(int i = 1; i < v.size(); i++){
            if(v[i]>v[i-1]) numStore[i] = numStore[i-1]+1;
            else if(v[i]==v[i-1]) numStore[i] = numStore[i-1];
        }
        vector<int>ans(n);
        for(int i = 0; i < n; i++){
            int target = arr[i];
            int low = 0;
            int high = n-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(v[mid]==target) {
                    ans[i] = numStore[mid];
                    break;
                }
                else if(target>v[mid]) low = mid+1;
                else high = mid-1;
            }
        }
        return ans;
    }
};