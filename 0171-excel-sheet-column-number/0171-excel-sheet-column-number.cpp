class Solution {
public:
    int titleToNumber(string columnTitle) {
        int p=0;
        int k;
        for(char c:columnTitle){
            k=(int)c-64;
            p=(p*26)+k;
        }
        return p;
    }
};