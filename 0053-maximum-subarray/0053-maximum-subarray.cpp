class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=INT_MIN;
        int cursum=0;
        for (int i=0;i<nums.size();i++) {
            cursum+=nums[i];
            if (cursum>mx) mx=cursum;
            if (cursum<0) cursum=0;
        }
        return mx;
    }
};