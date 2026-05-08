class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m=0;
        map<char,int> mp;
        int i=0,j=0;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                int n=mp.size();
                m=max(n,m);
            }
            else{
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return m;
    }
};