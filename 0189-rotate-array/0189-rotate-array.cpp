class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        int n=nums.size();
        if(k>n) k=k%n;
        int j=-1;
        for(int i=n-k;i<nums.size();i++){
            j++;
            nums[j]=v[i];
        }
        for(int i=0;i<n-k;i++){
            j++;
            nums[j]=v[i];
        }
    }
};