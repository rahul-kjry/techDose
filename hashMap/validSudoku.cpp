class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,int> mp1, mp2;
        for(int r=0; r<9; ++r) {
            mp1.clear();
            mp2.clear();
            for(int c=0; c<9; ++c) {
                if(board[r][c] != '.') {
                    if(mp1[board[r][c]] == 0) 
                        mp1[board[r][c]] = 1;
                    else
                        return false;
                }
                if(board[c][r] != '.') {
                    if(mp2[board[c][r]] == 0) 
                        mp2[board[c][r]] = 1;
                    else 
                        return false;
                }
            }
        }
        for(int r=0; r<9; r+=3) {
            for(int c=0; c<9; c+=3) {
                mp1.clear();
                for(int sr=r; sr<r+3; ++sr) {
                    for(int sc=c; sc<c+3; ++sc) {
                        if(board[sr][sc] != '.') {
                            if(mp1[board[sr][sc]] == 0) 
                               mp1[board[sr][sc]] = 1;
                            else
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
