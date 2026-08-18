class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int i=1,j=x;
        int sq;
        while(i<j){
            int mid=i+(j-i)/2;
            if(mid<=(x/mid)){
                i=mid+1;
                sq=mid;
            }
            else{
                j=mid;
            }

        }
        return sq;
    }
};