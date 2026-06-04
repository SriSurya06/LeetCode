class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto k:mp){
            pq.push({k.second,k.first});
        }
        int c=0;
        string res="";
        while(!pq.empty()){
            int a=pq.top().first;
            char b=pq.top().second;
            pq.pop();
            res.append(a,b);
        }
        return res;

    }
};