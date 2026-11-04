class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int ele:nums){
            pq.push(ele);
        }
        while(pq.size()>0){
            int first = pq.top();
            pq.pop();
            int sec = pq.top();
            pq.pop();
            v.push_back(sec);
            v.push_back(first);
        }
        return v;
    }
};