class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        int j=k;
        while(j>1){
            pq.pop();
            j--;
        }
        return pq.top();
    }
};