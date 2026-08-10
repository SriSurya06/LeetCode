class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> v;
        for(auto k:mp){
            if(k.second > (n/3)) v.push_back(k.first);
        }
        return v;
    }
};