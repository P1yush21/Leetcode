class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int duplicate = n;
        // vector<int>v = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        int sum = 0;
        while(duplicate>0){
            int digit = duplicate%10;
            if(digit == 0 || digit == 1) sum+=1;
            else if(digit==2) sum+=2;
            else if(digit==3) sum+=6;
            else if(digit==4) sum+=24;
            else if(digit==5) sum+=120;
            else if(digit==6) sum+=720;
            else if(digit==7) sum+=5040;
            else if(digit==8) sum+=40320;
            else sum+=362880;
            duplicate/=10;
        }
        string str = to_string(sum);
        string ptr = to_string(n);
        cout<<sum<<" "<<n; 
        vector<int>v(10,0);
        for(int i = 0; i < str.size(); i++){
            v[str[i]-'0']++;
        }
        for(int i = 0; i < ptr.size(); i++){
            v[ptr[i]-'0']--;
        }
        for(int i = 0; i < v.size(); i++){
            if(v[i]==1 || v[i] < 0) return false;
        }
        return true;
    }
};