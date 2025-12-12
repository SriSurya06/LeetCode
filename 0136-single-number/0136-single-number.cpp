class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int res;
        for(auto k:mp){
            if(k.second==1) res=k.first;
        }
        return res;
    }
};