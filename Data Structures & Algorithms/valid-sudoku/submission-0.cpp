class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                for(int k=0;k<9;k++)
                {
                if(board[i][j]==board[i][k] && board[i][j]!='.' && j!=k)
                    return false;
                if(board[i][j]==board[k][j] && board[i][j]!='.' && i!=k)
                    return false;
                }
                int boxrowstart=(i/3)*3;
                int boxcolstart=(j/3)*3;
                for(int r=boxrowstart;r<boxrowstart+3;r++)
                {
                    for(int c=boxcolstart;c<boxcolstart+3;c++)
                {
                    if(board[r][c]==board[i][j] && board[i][j]!='.' && r!=i)
                    return false;
                }
                }
            }
        }
        
       
        return true;
    }
};
