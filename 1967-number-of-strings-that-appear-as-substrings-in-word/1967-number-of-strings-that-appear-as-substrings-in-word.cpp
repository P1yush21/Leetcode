class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        int n = p.size();
        int m = w.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            bool flag = false;
            for(int j = 0; j < m; j++){
                int k = 0;
                int x = j;
                while(k < p[i].size() && x < m && p[i][k]==w[x]){
                    k++;
                    x++;
                }
                if(k == p[i].size()) {
                    flag = true;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};