class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                res+=(tolower(s[i]));
            }
            else if(islower(s[i])) res+=s[i];
            else if(s[i]>='0' && s[i]<='9') res+=s[i];
            else continue;
        }
        string f=res;
        reverse(res.begin(),res.end());
        return res==f;
    }
};