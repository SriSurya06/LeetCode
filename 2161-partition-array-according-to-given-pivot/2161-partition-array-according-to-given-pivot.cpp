class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) v1.push_back(nums[i]);
            else if(nums[i]>pivot) v2.push_back(nums[i]);
            else v3.push_back(nums[i]);
        }
        for(int k:v3) v1.push_back(k);
        for(int k:v2) v1.push_back(k);
        return v1;
    }
};