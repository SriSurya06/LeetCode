class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int res=0;
        int i=0;
        sort(costs.begin(),costs.end());
        while( i< costs.size() && coins){
            if(costs[i]>coins) break;
            res++;
            coins-=costs[i];
            i++;
        }
        return res;
    }
};