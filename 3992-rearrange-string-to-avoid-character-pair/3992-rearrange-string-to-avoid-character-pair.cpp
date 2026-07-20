class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string res="";
        string temp="";
        for(char k:s){
            if(k==x) temp+=k;
            else res+=k;
        }
        return res+temp;
    }
};