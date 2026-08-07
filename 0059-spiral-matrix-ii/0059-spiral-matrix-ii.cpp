class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int tne = n*n;
        vector<vector<int>>v(n, vector<int>(n,0));
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = n-1;
        int count = 1;
        while(minr<=maxr && minc<=maxc){
            for(int i = minc; i <= maxc && count<=tne; i++){
                v[minr][i] = count;
                count++;
            }
            minr++;
            for(int i = minr; i <= maxr && count<=tne; i++){
                v[i][maxc] = count;
                count++;
            }
            maxc--;
            for(int i = maxc; i >= minc && count<=tne; i--){
                v[maxr][i] = count;
                count++;
            }
            maxr--;
            for(int i = maxr; i >= minr && count<=tne; i--){
                v[i][minc] = count;
                count++; 
            }
            minc++;
        }
        return v;
    }
};