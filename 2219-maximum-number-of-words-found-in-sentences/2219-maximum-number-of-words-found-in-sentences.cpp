class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int t=0;
        for(auto i:sentences){
            int c=0;
            for(char j:i){
                if(j==' ') c++;
            }
            t=max(t,c);
        }
        return t+1;
    }
};