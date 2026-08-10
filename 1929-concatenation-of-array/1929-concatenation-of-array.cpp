class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        int i=0;
        while(i<nums.size()){
            v.push_back(nums[i]);
            i++;
        }
        return v;
    }
};