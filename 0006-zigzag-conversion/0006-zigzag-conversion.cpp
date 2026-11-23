class Solution {
public:
    string convert(string s, int numRows) {
        int m = s.size();
        if(numRows == 1 || numRows >= m) return s;
        vector<vector<char>>v(numRows, vector<char>(m,'0'));
        int i = 0, j = 0;
        int tr = 0;
        while(tr < m){
            for(int k = i; k < numRows && tr < m; k++){
                v[k][j] = s[tr];
                tr++;
            }
            i=numRows-1;
            while(tr < m && i!=0){
                i--;
                j++;
                v[i][j] = s[tr];
                tr++;
            }
            i = 1;
        }
        string str = "";
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[0].size(); j++){
                if(v[i][j]!='0') str+=v[i][j];
            }
        }
        return str;
    }
};