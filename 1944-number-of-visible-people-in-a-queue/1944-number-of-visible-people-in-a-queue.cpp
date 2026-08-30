class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        // int n = nums.size();
        // vector<int>v(n);
        // for(int i = 0; i < n; i++){
        //     int maxHeight = 0;
        //     for(int j = i+1; j < n; j++){
        //         if(nums[j]>maxHeight){
        //             v[i]++;
        //             maxHeight = nums[j];
        //         }
        //         if(nums[j]>nums[i])break;
        //     }
            
        // }
        // return v;

        int n = nums.size();
        vector<int>v(n);
        stack<int>st;
        st.push(nums[n-1]);
        v[n-1] = 0;
        for(int i = n-2; i >= 0; i--){
            int count = 0;
            while(st.size()>0 && nums[i]>st.top()) {
                st.pop();
                count++;
            }
            if(st.size()!=0) count++;
            v[i]=count;
            st.push(nums[i]);

        }
        return v;
    }
};