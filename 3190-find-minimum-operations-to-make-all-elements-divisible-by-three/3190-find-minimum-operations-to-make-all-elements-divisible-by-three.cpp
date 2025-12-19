class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res=0;
        for(int s:nums){
            if(s%3!=0) res++;
        }
        return res;
    }
};