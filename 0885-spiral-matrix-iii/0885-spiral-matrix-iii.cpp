class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> v;
        int i=rStart,j=cStart;
        int t=0;
        v.push_back({i,j});
        while(v.size()<(rows*cols)){
            t++;
            int c=t;
            if(c%2!=0){
                while(c){
                    j++;
                    if(i>=0 && i<rows && j>=0 && j<cols) v.push_back({i,j});
                    c--;
                }
                c=t;
                while(c){
                    i++;
                    if(i>=0 && i<rows && j>=0 && j<cols) v.push_back({i,j});
                    c--;
                }
            }
            else{
                while(c){
                    j--;
                    if(i>=0 && i<rows && j>=0 && j<cols) v.push_back({i,j});
                    c--;
                }
                c=t;
                while(c){
                    i--;
                    if(i>=0 && i<rows && j>=0 && j<cols) v.push_back({i,j});
                    c--;
                }
            }
        }
        return v;
    }
};