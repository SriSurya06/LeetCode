class Solution {
public:
    int countTriples(int n) {
        int c=0;
        for(int i=1;i<n;i++){
            for(int j=i;j<=n;j++){
                // int r=ceil(sqrt(pow(i,2)+pow(j,2))) == floor(sqrt(pow(i,2)+pow(j,2)));
                int a=sqrt(pow(i,2)+pow(j,2));
                float f=sqrt(pow(i,2)+pow(j,2));
                if(a==f && a<=n){
                    c++;
                }
            }
        }
        return c*2;
    }
};