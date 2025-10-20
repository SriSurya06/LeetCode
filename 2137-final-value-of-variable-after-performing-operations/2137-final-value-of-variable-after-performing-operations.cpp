class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int s=0;
        for(auto i:operations){
            if(i=="++X" || i=="X++") s++;
            else s--;
        }
        return s;
    }
};