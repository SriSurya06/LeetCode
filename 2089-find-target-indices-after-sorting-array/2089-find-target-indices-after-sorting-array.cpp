class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0,great=0;
        for(auto i : nums){
            if(i<target){
                less++;
            }else if(i>target){
                great++;
            }
        }
        vector<int> ans;
        int n=nums.size()-great-less;
        for(int i=0;i<n;i++){
            ans.push_back(i+less);
        }
        return ans;
    }
};