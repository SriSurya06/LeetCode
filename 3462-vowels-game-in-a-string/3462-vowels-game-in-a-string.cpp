class Solution {
public:
    bool doesAliceWin(string s) {
        int f=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u'){
                f=1;
                break;
            }
        }
        if(f==1) return true;
        else return false;
        
    }
};