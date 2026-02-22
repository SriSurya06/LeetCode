class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1,mid;
        sort(nums.begin(),nums.end());
        if(l!=nums[l]) return 0;
        if(h==nums[h]) return nums[h]+1;
        while(l+1<h){
            mid=(l+h)/2;
            if(mid==nums[mid]) l=mid;
            else h=mid;
        }
        // if(nums[mid]-nums[mid-1])
        return l+1;
        
    }
};