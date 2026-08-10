class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]<0) return 1;
        int k=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<0) continue;
            k=i;
            break;
        }
        if(nums[k]>1) return 1;
        for(int i=k;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]>1) return nums[i]+1;
        }
        return nums[nums.size()-1] + 1;
    }
};