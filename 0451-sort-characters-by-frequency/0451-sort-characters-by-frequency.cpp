class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        map<char,int> mp;
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
            if(c<a){
                res+=b;
                c++;
            }
            else{
                pq.pop();
                c=0;
            }
        }
        return res;

    }
};