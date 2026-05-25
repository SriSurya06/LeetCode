class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(),1);
        int pre=1,suf=1;
        for(int i=0;i<nums.size();i++){
            v[i]*=pre;
            pre*=nums[i];
        }

        for(int i=nums.size()-1;i>=0;i--){
            v[i]*=suf;
            suf*=nums[i];
        }
        return v;
    }
};