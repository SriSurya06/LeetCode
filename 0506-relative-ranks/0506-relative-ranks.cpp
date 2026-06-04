class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<string> v(score.size(),"");
        int c=0;
        while(!pq.empty()){
            c++;
            int idx=pq.top().second;
            if(c==1) v[idx]="Gold Medal";
            else if(c==2) v[idx]="Silver Medal";
            else if(c==3) v[idx]="Bronze Medal";
            else v[idx]=to_string(c);
            pq.pop();
        }
        return v;
    }
};