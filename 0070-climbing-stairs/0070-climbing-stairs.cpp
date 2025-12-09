class Solution {
public:
    int climbStairs(int n) {
        int f1=0,f2=1;
        int f;
        while(n>0){
            f=f1+f2;
            f1=f2;
            f2=f;
            n--;
        }
        return f;
    }
};