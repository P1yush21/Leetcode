class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            int num = 123 - s[i];
            cout<<num<<" ";
            sum += num*(i+1);
        }
        return sum;
    }
};