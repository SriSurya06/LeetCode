class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int l=0;
        int r=rows*cols-1;
        while (l<=r) {
            int mid=l+(r-l)/2;
            int i=mid/cols;
            int j=mid%cols;
            int cur=matrix[i][j];
            if (cur==target) return true;
            else if (cur<target) l=mid + 1;
            else r=mid-1;
        }
        return false;
    }
};
