class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> v(code.size(),0);
        int s=code.size();
        for(int i=0;i<code.size();i++){
            if(k>0){
                for(int j=i+1;j<1+i+k;j++){
                    v[i]+=code[j%s];
                }
            }
            else if(k<0){
                for(int j=i-1;j>i-1-abs(k);j--){
                    v[i]+=code[((j%s)+s)%s];
                }
            }
        }
        return v;
    }
};