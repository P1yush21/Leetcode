class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = *min_element(nums.begin(), nums.end());
        int largest = *max_element(nums.begin(), nums.end());
        int num = 1;
        for(int i =1; i <= largest; i++){
            if(largest%i==0 && smallest%i==0){
                num = i;
            }
        }
        return num;
    }
};