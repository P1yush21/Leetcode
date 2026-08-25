class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        for(int i = 1; i < 101; i++){
            int mul = k*i;
            bool flag = false;
            for(int j = 0; j < n; j++){
                if(mul==nums[j]) flag = true;
            }
            if(!flag) return k*i;
            // int low = 0, high = n-1;
            // while(low<=high){
            //     int mid = low + (high-low)/2;
            //     if(mul==nums[mid]) {
            //         flag=true;
            //         break;
            //     }
            //     else if(mul>nums[mid]) low = mid+1;
            //     else high=mid-1;
            // }
            // if(!flag) return k*i;
        }
        return nums[n-1]+1;
    }
};