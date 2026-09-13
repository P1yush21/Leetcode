class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(*max_element(nums.begin(),nums.end())+1);
        for(int i = 0; i < n; i++){
            v[nums[i]]++; 
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(v[nums[i]]==3){
                vector<int>ans;
                for(int j = 0; j < n; j++){
                    if(nums[j] == nums[i]){
                        ans.push_back(j);
                    }
                }
                if(ans[1]-ans[0]==ans[2]-ans[1]) count++;
                v[nums[i]]=0;
            }
        }
        return count;
    }
};