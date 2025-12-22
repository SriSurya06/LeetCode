class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int ls=0,rs=0;
            for(int j=0;j<nums.size();j++){
                if(j<i) ls+=nums[j];
                else if(j>i) rs+=nums[j];
            }
            v.push_back(abs(ls-rs));
        }
        return v;
    }
};