class RecentCounter {
public:
    vector<int>v;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int ans = t-3000;
        v.push_back(t);
        int count = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i]>=ans && v[i]<=t) {
                count++;
            }
        }
        return count;
    }
};
