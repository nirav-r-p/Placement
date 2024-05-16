#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<char>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------" << endl;
}
bool isPlace(vector<vector<char>> board, int row,int col)
{
    int i,j;
    for (i = 0; i < col; i++)
        if (board[row][i]=='Q')
            return false;
 
 
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]=='Q')
            return false;
 
    for (i = row, j = col; j >= 0 && i < board.size(); i++, j--)
        if (board[i][j]=='Q')
            return false;
 
    return true;
    
}
bool nQueen(vector<vector<char>> board, int j=0)
{
  
    
    if (j >= board.size())
    {
        print(board);
        return true;
    }
    for (int i = 0; i < board[0].size(); i++)
    {
        if (isPlace(board,i, j))
        {
            board[i][j] = 'Q';
           if(nQueen(board,j + 1)) return true;
            board[i][j] = '-';
          
        }
    }
return false;
}

int main()
{
    vector<vector<char>> b = {{'-', '-', '-', '-'}, {'-', '-', '-', '-'}, {'-', '-', '-', '-'}, {'-', '-', '-', '-'}};
    cout<<nQueen(b);
    return 0;
}