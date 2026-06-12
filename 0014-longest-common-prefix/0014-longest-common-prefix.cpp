class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return " ";
        // string res="";
        int idx=strs[0].size();
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<strs[0].size()){
                if(strs[i][j]==strs[0][j]){ 
                    j++;
                }
                else break;
            }
            idx=min(idx,j);
        }
        return strs[0].substr(0,idx);
    }
};