class Solution {
public:
    bool checkGoodInteger(int n) {
        long long digi=0,sq=0;
        while(n>0){
            int r=n%10;
            digi+=r;
            sq+=(r*r);
            n=n/10;
        }
        if(sq-digi>=50) return true;
        return false;
    }
};