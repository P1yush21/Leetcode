class Solution {
public:
    typedef pair<int,pair<int,int>> pi;  // distance, val
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        vector<vector<int>> ans;
        priority_queue<pi>pq;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i][0];
            int y = nums[i][1];
            int distance = x*x + y*y;
            pq.push({distance,{x, y}});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(pq.size()>0){
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};