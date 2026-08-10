class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool f=0;
        for(int i=0;i<9;i++){
            unordered_set<char> s;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(s.contains(board[i][j])) return false;
                s.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> s;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                if(s.contains(board[j][i])) return false;
                s.insert(board[j][i]);
            }
        }
        for(int k=0;k<9;k++){
            unordered_set<char> s;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int r=(k/3)*3+i;
                    int c=(k%3)*3+j;
                    if(board[r][c]=='.') continue;
                    if(s.contains(board[r][c])) return false;
                    s.insert(board[r][c]);
                }
            }
        }
        return true;
    }
};