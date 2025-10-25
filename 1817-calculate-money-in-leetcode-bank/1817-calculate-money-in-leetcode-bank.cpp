class Solution {
public:
    int totalMoney(int n) {
        int m=0,sum=0;
        int j=0,i=1;
        while(i<=n){
            if(j%7==0){
                m=(i/7)+1;
            }
            else m++;
            sum=sum+m;
            i++;
            j++;
        }
        return sum;
    }
};