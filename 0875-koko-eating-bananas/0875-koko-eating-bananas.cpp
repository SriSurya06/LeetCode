class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        // sort(piles.begin(),piles.end());
        int l=1,r=0;
        for(int p:piles){
            r=max(r,p);
        }
        while(r>l){
            int mid=l+(r-l)/2;
            int hh=0;
            for(int p:piles){
                hh+=(p)/mid;
                if(p%mid!=0) hh++;
            }
            if(hh<=h) r=mid;
            else l=mid+1;
        }
        return l;
       
    }
};