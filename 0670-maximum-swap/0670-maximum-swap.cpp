class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int maxIdx = 0;
        int temp = 0;
        bool flag = false;
        for(int i = 0; i < str.size(); i++){
            for(int j = i+1; j < str.size(); j++){
                if(str[i] < str[j] && temp <= str[j]){
                    temp = str[j];
                    maxIdx = j;
                    flag=true;
                }
            }
            if(flag){
                swap(str[i],str[maxIdx]);
                break;
            }
        }
        int n = stoi(str);
        return n;
    }
};