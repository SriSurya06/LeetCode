class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int v=0,c=0;
        for(auto i:mp){
            if(i.first=='a' || i.first=='e' || i.first=='i' || i.first=='o' || i.first=='u'){
                if(v<i.second) v=i.second;
            }
            else{
                if(c<i.second) c=i.second;
            }
        }
        return v+c;
    }
};