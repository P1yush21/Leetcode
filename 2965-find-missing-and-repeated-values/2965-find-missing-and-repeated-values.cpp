class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> v(n * n);
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v[k] = grid[i][j];
                k++;
            }
        }
        sort(v.begin(),v.end());   
        vector<int>ans(2);
        bool flag = false;
        if(v[0]!=1) {
            flag = true;
            ans[1] = 1;
        }
        for(int i = 1; i < v.size(); i++){
            if(v[i]==v[i-1]) ans[0] = v[i];
            if(v[i] - v[i-1] > 1){
                flag = true;
                ans[1] = v[i]-1;
            }
        }
        if(flag==false) ans[1] = n * n;
        return ans;
    }
};