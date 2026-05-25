class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> pp(mp.begin(),mp.end());
        sort(pp.begin(),pp.end(),cmp);
        for(int i=0;i<k;i++){
            v.push_back(pp[i].first);
        }
        return v;
    }
};