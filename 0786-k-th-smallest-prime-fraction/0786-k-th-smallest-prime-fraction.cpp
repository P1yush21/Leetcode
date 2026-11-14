class Solution {
public:
    typedef pair<double, pair<int, int>> P;
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<P, vector<P>, greater<P>> pq;
        for(int i = 0; i < arr.size(); i++){
            for(int j = i+1; j < arr.size(); j++){
                float ratio = (float)arr[i] / arr[j];
                pq.push({ratio, {arr[i], arr[j]}});
            }
        }
        int count = 0;
        while(count < k-1){
            pq.pop();
            count++;
        }
        return {pq.top().second.first, pq.top().second.second};
    }
};