class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]==1){
                    int row = 0;
                    int col = 0;
                    for(int k = 0; k < m; k++){
                        if(grid[i][k]==1) row++;
                    }
                    for(int k = 0; k < n; k++){
                        if(grid[k][j]==1) col++;
                    }
                    if(row>1 || col>1) ans++;
                }
            }
        }
        return ans;
    }
};