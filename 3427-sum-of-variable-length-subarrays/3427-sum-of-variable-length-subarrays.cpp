class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            int l=max(0,i-nums[i]);
            for(int j=l;j<=i;j++){
                k=k+nums[j];
            }
        }
        return k;
    }
};