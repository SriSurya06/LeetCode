class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int m=0;
       int i=0;
       int j=1;
       while(j<prices.size()){
        int r=prices[j]-prices[i];
        if(r>0){
            m=max(m,r);
        }
        else{
            i=j;
        }
        j++;
       }
        return m;
    }
};