class Solution {
public:
    int minPartitions(string n) {
        int  s=0;
        for(auto k:n){
            s=max(s,k-'0');
        }
        return s;
    }
};