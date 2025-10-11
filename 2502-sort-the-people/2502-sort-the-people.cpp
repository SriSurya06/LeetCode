class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp;
        for(int i=0;i<names.size();i++){
            mp[heights[i]]=names[i];
        }
        vector<string> str;
        for(auto t:mp){
            str.push_back(t.second);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};