class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(string k:patterns){
            if(word.contains(k)) c++;
        }
        return c;
    }
};