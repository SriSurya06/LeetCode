class Solution {
public:
    int add(int n){
        int s=0;
        while(n>0){
            s+=(n%10);
            n=n/10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int temp=add(nums[i]);
            m=min(m,temp);
        }
        return m;
    }
};