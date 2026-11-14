class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<
            pair<float, pair<int, int>>,
            vector<pair<float, pair<int, int>>>,
            greater<pair<float, pair<int, int>>>
        > pq;
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
        auto x = pq.top();
        return {x.second.first, x.second.second};
    }
};