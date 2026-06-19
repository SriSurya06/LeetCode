class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0,alt=0;
        for(int i=0;i<gain.size();i++){
            alt+=gain[i];
            maxi=max(alt,maxi);
        }
        return maxi;
    }
};