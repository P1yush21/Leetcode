class Solution {
public:
    int nearestDrone(vector<vector<int>>& drone, vector<int>& target) {
        int n = drone.size();
        int mn = INT_MAX;
        int res = INT_MAX;
        int idx = -1;
        for(int i = 0; i < n; i++){
            int dis = abs(drone[i][0]-target[0]) + abs(drone[i][1]-target[1]);
            if(dis <= drone[i][2]){
                res = dis;
                if(mn > res){
                    mn = res;
                    idx = i;
                }
            }
        }
        return idx;
    }
};