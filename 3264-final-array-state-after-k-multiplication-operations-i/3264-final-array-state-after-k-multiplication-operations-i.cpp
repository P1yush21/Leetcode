class Solution {
public:
    typedef pair<int,int> pi; // ele, idx
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            pq.push({nums[i], i});
        }
        int count = 0;
        while(count<k){
            pi pri = pq.top();
            pq.pop();
            pq.push({pri.first* multiplier, pri.second});
            count++;
        }
        vector<int>v(n);
        while(pq.size()>0){
            pi pri = pq.top();
            pq.pop();
            v[pri.second] = pri.first;
        }
        return v;
    }
};