class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize != 0) return false;
        if(groupSize==1) return true;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        sort(hand.begin(),hand.end());

        for(int i=0;i<hand.size();i++){
            if(pq.empty()) pq.push({hand[i],1});
            else if(pq.top().first+1 == hand[i]){
                // pq.top().first=hand[i];
                int c=pq.top().second;
                c++;
                if(c==groupSize){
                    pq.pop();
                }
                else{
                    pq.pop();
                    pq.push({hand[i],c});
                }
            }
            else if(pq.top().first==hand[i]){
                pq.push({hand[i],1});
            } 
            else{
                return false;
            }   
        }
        if(pq.empty()) return true;
        else return false;
    }
};