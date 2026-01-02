class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=(nums.size())/2;
        int res;
        for(auto v:mp){
            if(v.second == n){
                res=v.first;
                break;
            }
        }
        return res;
    }
};