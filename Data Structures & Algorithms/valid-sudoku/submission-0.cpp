class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++)
        {
            unordered_set<char>seen;
            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.') continue;
                else if(seen.count(board[i][j])) return false;
                else seen.insert(board[i][j]);
            }
        }
        for(int i=0; i<9; i++)
        {
            unordered_set<char>seen;
            for(int j=0; j<9; j++)
            {
                if(board[j][i]=='.') continue;
                else if(seen.count(board[j][i])) return false;
                else seen.insert(board[j][i]);
            }
        }
        for(int box=0; box<9; box++)
        {
            unordered_set<char>seen;
            for(int i=0; i<3; i++)
        { 
            for(int j=0; j<3; j++)
            {
                int row=(box/3)*3+i; 
                int col=(box%3)*3+j; 
                if(board[row][col]=='.') continue;
                else if(seen.count(board[row][col])) return false;
                else seen.insert(board[row][col]);
            }
        }
        }
        return true;
    }
};
