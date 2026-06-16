class Solution {
public:
    string processStr(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                res+=s[i];
            }
            else if(s[i]=='*' && res.size()!=0) res.pop_back();
            else if(s[i]=='%') reverse(res.begin(),res.end());
            else res=res+res;

        }
        return res;
    }
};