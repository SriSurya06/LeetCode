class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s.size()==0) return true;
        while(i<s.size() && j<t.size()){
            if(t[j]==s[i]){
                i++;
            }
            j++;
        }
        if(i==s.size()) return true;
        else return false;
    }
};