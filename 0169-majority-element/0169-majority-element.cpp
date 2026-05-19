class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0];
        int occ=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=major) occ--;
            else occ++;
            if(occ==0){
                major=nums[i];
                occ=1;
            }
        }
        return major;
    }
};