class Solution {
public:
    typedef pair<int,int>pi;  // dis,ele
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n =arr.size();
        priority_queue<pi>pq;
        for(int i = 0; i < n; i++){
            int distance = abs(x-arr[i]);
            pq.push({distance,arr[i]});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};