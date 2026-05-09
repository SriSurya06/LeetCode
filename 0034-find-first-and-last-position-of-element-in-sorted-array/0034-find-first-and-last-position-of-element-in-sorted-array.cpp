class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int s=-1,e=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                s=i;
                break;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==target){
                e=j;
                break;
            }
        }
        v.push_back(s);
        v.push_back(e);
        return v;
    }
};