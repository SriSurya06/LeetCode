class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int> mp;
        for(int j=lowLimit;j<=highLimit;j++){
            int r,s=0;
            int i=j;
            while(i>0){
                r=i%10;
                s=s+r;
                i=i/10;
            }
            mp[s]++;
        }
        int m=0;
        for(auto i:mp){
            if(i.second > m) m=i.second;
        }
        return m;
    }
};