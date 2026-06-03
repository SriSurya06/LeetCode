class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int temp=pq.top();
            pq.pop();
            if(pq.top()==temp) pq.pop();
            else {
                temp-=pq.top();
                pq.pop();
                pq.push(temp);
            }
        }
        if(pq.size()) return pq.top();
        else return 0;
    }
};