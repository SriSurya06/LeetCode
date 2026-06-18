class Solution {
public:
    int maxDistinct(string s) {
        set<char> jj;
        for(char k:s){
            jj.insert(k);
        }
        return jj.size();
    }
};