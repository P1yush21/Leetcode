class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            int freq = x.second;
            if(s.find(freq)!=s.end()) return false;
            else s.insert(freq);
        }
        return true;
    }
};