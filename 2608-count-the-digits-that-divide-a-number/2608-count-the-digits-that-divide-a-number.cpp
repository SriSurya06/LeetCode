class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int temp=num;
        while(temp>0){
            if(num%(temp%10)==0) c++;
            temp=temp/10;
        }
        return c;
        
    }
};