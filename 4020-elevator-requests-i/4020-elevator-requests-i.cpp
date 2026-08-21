class Solution {
public:
    int elevatorRequests(int k, vector<int>& req) {
        int n = req.size();
        int res = req[0];
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            ans = abs(req[i]-req[i+1]);
            res+=ans;
        }
        return res;
    }
};