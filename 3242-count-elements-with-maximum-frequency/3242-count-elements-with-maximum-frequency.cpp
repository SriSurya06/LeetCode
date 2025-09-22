class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int m=0;
        for(auto i:mp){
            if(i.second >= m) m=i.second;
        }
        int sum=0;
        for(auto i: mp){
            if(i.second == m) sum=sum+i.second;
        }
        return sum;
    }
};