class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(),nums.end());
        int k=pq.top();
        pq.pop();
        int l=pq.top();
        return (l-1)*(k-1);
    }
};