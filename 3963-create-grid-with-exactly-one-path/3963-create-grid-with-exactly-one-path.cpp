class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>v;
        for(int i = 0; i < m; i++){
            string str = "";
            for(int j = 0; j < n; j++){
                if(i==0) str+='.';
                else if(j<=n-2){
                    str+='#';
                }
                else str += '.';
            }
            v.push_back(str);
        }
        return v;
    }
};