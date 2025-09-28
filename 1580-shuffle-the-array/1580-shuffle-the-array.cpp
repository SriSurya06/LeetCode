class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s=nums.size();
        vector<int>V(s);
        int i=0,j=0;
        int t=n;
        while(i<t){
            V[j]=nums[i];
            i++;
            j++;
            V[j]=nums[n];
            n++;
            j++;
        }
        return V;
    }
};