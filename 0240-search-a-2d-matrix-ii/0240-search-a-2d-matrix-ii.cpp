class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c=matrix[0].size();
        int r=matrix.size();
        int i=0,j=c-1;
        while(i<r && j>=0){
            if(target<matrix[i][j]){
                j--;
            }
            else if(target>matrix[i][j]){
                i++;
            }
            else return true;
        }
        return false;

    }
};