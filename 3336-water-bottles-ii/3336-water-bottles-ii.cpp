class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int t=numBottles;
        while(t>=numExchange){
            t=t-numExchange;
            numExchange++;
            numBottles++;
            t++;
        }
        return numBottles;
    }
};