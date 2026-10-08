class Solution {
public:
    bool squareIsWhite(string s) {
        bool alphaBlack = false;
        bool numBlack = false;
        if(s[0] =='a' ||s[0] =='c' ||s[0] =='e' ||s[0] =='g') alphaBlack = true;
        int num = s[1]-'0';
        if(num%2!=0) numBlack = true;

        if(numBlack && alphaBlack) return false;
        if(!numBlack && !alphaBlack) return false;
        return true;
    }
};