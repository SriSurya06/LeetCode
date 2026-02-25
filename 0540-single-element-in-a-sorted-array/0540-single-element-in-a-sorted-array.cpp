class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1 || nums[0]!=nums[1]) return nums[0];
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]!=nums[i+1]){
                if(nums[i+1]!=nums[i+2]) return nums[i+1];
            }
        }
        return nums[nums.size()-1];
    }
};