class Solution {
public:
    bool isPalindrome(int x) {
        long int r,p=0;
        int t=x;
        while(x>0){
            r=x%10;
            x=x/10;
            p=(p*10)+r;
        }
        if(p==t) return true;
        return false;
    }
};