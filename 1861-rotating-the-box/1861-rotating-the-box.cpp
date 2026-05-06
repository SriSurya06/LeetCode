class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        vector<vector<char>> v(n, vector<char>(m));
        
        for(int i=0;i<m;i++){
            int c=n-1;
            for(int j=n-1;j>=0;j--){
                if(boxGrid[i][j]=='*') c=j-1;
                else if(boxGrid[i][j]=='#'){
                        swap(boxGrid[i][j],boxGrid[i][c]);
                        c--;
                }
            }
        }

            // ------ // 

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               v[j][m-1-i]=boxGrid[i][j];
            }
        }
        // for(int i=0;i<n;i++){
        //     reverse(v[i].begin(),v[i].end());
        // }
         
        return v;
    }
};