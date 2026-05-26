class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> st(word.begin(),word.end());
        map<char,int> mp;
        for(auto k:st){
            k=tolower(k);
            mp[k]++;
        }
        int s=0;
        for(auto l:mp){
            if(l.second==2) s++;
        }
        return s;
    }
};