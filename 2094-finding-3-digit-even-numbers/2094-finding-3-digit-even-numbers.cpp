class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        unordered_map<int,int>mp;
        for(int ele : nums){
            mp[ele]++;
        }
        for(int i = 100; i < 1000; i += 2){
            int x = i;
            int a = x%10;
            x /= 10;
            int b = x%10;
            x /= 10;
            int c = x%10;
            if(mp.find(a)!=mp.end()){
                mp[a]--;
                if(mp[a]==0) mp.erase(a);
                if(mp.find(b)!=mp.end()){
                    mp[b]--;
                    if(mp[b]==0) mp.erase(b);
                    if(mp.find(c)!=mp.end()){
                        v.push_back(i);
                    }
                    mp[b]++;
                }
                mp[a]++;
            }
        }
        return v;
    }
};