class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> v;
        for(auto k:mp){
            if(k.second>1) v.push_back(k.first);
        }
        return v;
    }
};