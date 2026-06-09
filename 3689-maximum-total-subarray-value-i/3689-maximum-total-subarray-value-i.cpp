class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maximum = INT_MIN;
        long long minimum = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(maximum<nums[i]) maximum = nums[i];
            if(minimum>nums[i]) minimum = nums[i];
        }
        return k*(maximum-minimum);
    }
};