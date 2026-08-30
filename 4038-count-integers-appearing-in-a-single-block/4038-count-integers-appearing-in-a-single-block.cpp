class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<int>v1(101);
        for(int i = 0; i < n ; i++){
            vector<int>v;
            v1[nums[i]]++;
            if(v1[nums[i]]<=1){
                for(int j = 0; j < n; j++){
                    if(nums[i]==nums[j]) v.push_back(j);
                }
                bool flag = false;
                for(int j = 1; j < v.size(); j++){
                    if(v[j-1]+1!=v[j]) flag = true; 
                }
                if(flag==false) count++;
            }
        }
        return count;
    }
};