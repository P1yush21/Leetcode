class Solution {
public:
    string maxSumOfSquares(int digit, int sum) {
        string str = "";
        int num = 9; 
        while(sum>0 && num>0){
            if(sum>=num){
                sum = sum - num;
                str += num + '0';
            }
            else num--;
        }
        if(sum>0 || digit<str.size()) return "";
        else if(digit>str.size()) {
            int zero = digit-str.size();
            for(int i = 0; i < zero; i++){
                str+='0';
            }
        }
        return str;
    }
};