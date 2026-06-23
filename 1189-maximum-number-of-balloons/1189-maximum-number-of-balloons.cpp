class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int mini;
        int b=0,a=0,l=0,o=0,n=0;
        for(char k:text) {
            if(k=='b') b++;
            else if(k=='a') a++;
            else if(k=='l') l++;
            else if(k=='o') o++;
            else if(k=='n') n++;
        }
        l=l/2;
        o=o/2;
        mini=min({b,a,l,o,n});
        return mini;
    }
};