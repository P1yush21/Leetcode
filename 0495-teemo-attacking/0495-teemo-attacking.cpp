class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int duration) {
        int n = time.size();
        int end = time[0] + duration - 1;
        int ans = duration;
        for (int i = 1; i < n; i++) {
            if (time[i] <= end) {
                // Overlapping
                int newEnd = time[i] + duration - 1;
                ans += newEnd - end;
                end = newEnd;
            }
            else {
                // Non-overlapping
                ans += duration;
                end = time[i] + duration - 1;
            }
        }
        return ans;
    }
};