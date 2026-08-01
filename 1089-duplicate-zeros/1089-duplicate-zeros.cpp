class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int i = 0; 
        vector<int>v;
        for(int i= 0 ; i < n; i++){
            if(v.size()==n) {
                arr = v;
                return;
            }
            if(arr[i]!=0) v.push_back(arr[i]);
            else{
                v.push_back(0);
                if(v.size()==n) {
                    arr = v;
                    return;
                }
                v.push_back(0);
            } 
        }
    }
};