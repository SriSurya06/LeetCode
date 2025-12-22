class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            int l=max(0,i-nums[i]);
            int s=0;
            for(int j=l;j<=i;j++){
                s=s+nums[j];
            }
            k=k+s;
        }
        return k;
    }
};