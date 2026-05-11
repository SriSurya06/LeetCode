class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> q;
        for(int i=0;i<nums.size();i++){
            vector<int> v;
            int n=nums[i];
            while(n>0){
                int r=n%10;
                v.push_back(r);
                n=n/10;
            }
            reverse(v.begin(),v.end());
            for(int k:v){
                q.push_back(k);
            }
        }
        return q;
    }
};