class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                c=1;
            }
            else{
                c++;
            }
            if(c<=2){
                v.push_back(nums[i]);
            }
        }
        nums=v;
        return v.size();
    }
};