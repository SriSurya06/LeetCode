class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(m<i) return false;
            if(m==nums.size()-1) return true;
            m=max(m,nums[i]+i);
        }
        return true;
    }
};