class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp; 
        // map pair is <ele,freq>
        for(int ele : nums){
            mp[ele]++;
        }
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for(auto x : mp){
            pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};