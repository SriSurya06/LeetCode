class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int mx=1;
        int s=1;
        set<int> st(nums.begin(),nums.end());
        if(st.size()==1) return 1;

        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==0 ) continue;
            else if(nums[i]-nums[i-1]==1) s++;
            else{
                s=1;
            }
            mx=max(s,mx);
        }
        return mx;
    }
};