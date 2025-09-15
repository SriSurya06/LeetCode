class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        for(auto i:stones){
            mp[i]++;
        }
        int c=0;
        for(auto j:jewels){
            c=c+mp[j];
        }
        return c;
    }
};