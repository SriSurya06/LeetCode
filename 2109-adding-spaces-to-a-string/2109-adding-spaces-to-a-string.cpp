class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string r;
        sort(spaces.begin(),spaces.end());
        int i=0,j=0;
        while(i<s.size()){
            if(j<spaces.size() && spaces[j]==i){
                r+=" ";
                j++;
            }
            r+=s[i];
            i++;
        }
        return r;
    }
};