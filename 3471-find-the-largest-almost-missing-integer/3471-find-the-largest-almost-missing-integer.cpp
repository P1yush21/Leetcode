class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(51, 0);

        // First window
        vector<int> seen(51, 0);
        for(int i = 0; i < k; i++) {
            seen[nums[i]] = 1;
        }

        for(int x = 0; x <= 50; x++) {
            if(seen[x])
                v[x]++;
        }

        int i = 1;
        int j = k;

        // Remaining windows
        while(j < n) {
            vector<int> seen(51, 0);

            for(int p = i; p <= j; p++) {
                seen[nums[p]] = 1;
            }

            for(int x = 0; x <= 50; x++) {
                if(seen[x])
                    v[x]++;
            }

            i++;
            j++;
        }

        // Find largest number appearing in exactly one window
        for(int i = 50; i >= 0; i--) {
            if(v[i] == 1)
                return i;
        }

        return -1;
    }
};