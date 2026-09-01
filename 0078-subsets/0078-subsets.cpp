class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        sub(0,nums,temp,res);
        return res;
    }
    void sub(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>& res){
        if(idx==nums.size()){
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        sub(idx+1,nums,temp,res);
        temp.pop_back();
        sub(idx+1,nums,temp,res);

    }
};