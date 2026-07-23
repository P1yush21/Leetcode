class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>ans(n, vector<int>(m));
        int total = n*m;
        k = k%total;
        if(k==total) return grid;
        vector<int>res(total);
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res[count] = grid[i][j];
                count++;
            }
        }
        vector<int>op(total);
        for(int i = 0; i < total; i++){
            op[(i+k)%total] = res[i];
        }
        count=0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans[i][j] = op[count];
                count++;
            }
        }
        return ans;
    }
};