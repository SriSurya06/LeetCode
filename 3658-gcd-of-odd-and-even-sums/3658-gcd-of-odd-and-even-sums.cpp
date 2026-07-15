class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=0,o=0;
        for(int i=1;i<=n+n;i++){
            if(i%2==0) e+=i;
            else o+=i;
        }
        return gcd(e,o);
    }
};