class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(); // row
        int n = matrix[0].size();  // col
        int minr = 0;
        int maxr = m-1;
        int minc = 0;
        int maxc = n-1;
        int tne = n*m;
        int count = 0;
        vector<int>v;
        while(minr <= maxr && minc <= maxc){
            for(int i = minc; i <= maxc && count < tne; i++){
                v.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            for(int i = minr; i <= maxr && count < tne; i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            for(int i = maxc; i >= minc && count < tne; i--){
                v.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            for(int i = maxr; i >= minr && count < tne; i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return v;
    }
};