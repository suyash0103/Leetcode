class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<int> > temp(n);
        
        for(int i = 0; i < n; i++)
        {
            temp[i].resize(m);
            for(int j = 0; j < m; j++)
            {
                int live = 0;
                int dead = 0;
                
                if(i - 1 >= 0 && j - 1 >= 0)
                {
                    if(board[i - 1][j - 1] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(i - 1 >= 0)
                {
                    if(board[i - 1][j] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(i - 1 >= 0 && j + 1 < m)
                {
                    if(board[i - 1][j + 1] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(j - 1 >= 0)
                {
                    if(board[i][j - 1] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(j + 1 < m)
                {
                    if(board[i][j + 1] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(i + 1 < n && j - 1 >= 0)
                {
                    if(board[i + 1][j - 1] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(i + 1 < n && j + 1 < m)
                {
                    if(board[i + 1][j + 1] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(i + 1 < n)
                {
                    if(board[i + 1][j] == 0)
                    {
                        dead++;
                    }
                    else
                    {
                        live++;
                    }
                }
                
                if(live < 2 && board[i][j] == 1)
                {
                    temp[i][j] = 0;
                }
                else if(live >= 2 && live <= 3 && board[i][j] == 1)
                {
                    temp[i][j] = 1;
                }
                else if(live > 3 && board[i][j] == 1)
                {
                    temp[i][j] = 0;
                }
                else if(live == 3 && board[i][j] == 0)
                {
                    temp[i][j] = 1;
                }
                else
                {
                    temp[i][j] = board[i][j];
                }
                
            }
        }
        
        board = temp;
    }
};