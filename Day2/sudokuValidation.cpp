#include<bits/stdc++.h>
using namespace std;
bool checkVaild(vector<vector<char>> v,int gI,int gJ,int i,int j){
         for(int k=0;k<v.size();k++){
            if(v[i][k]==v[i][j] && k!=j){
              return false;
            } 
         }   
        for(int k=0;k<v.size();k++){
            if(v[k][j]==v[i][j] && k!=i){
                 return false;
            }
        }
         int g=gI-2;
         int h=gJ-2;
         for(int k=g;k<g+3;k++){
            for(int r=h;r<h+3;r++){
                if(v[k][r]!='.' && v[k][r]==v[i][j] && k!=i && r!=j){
                    return false;
                } 
            }
         }
         return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board.size();
        int gridI=2,gridJ=2;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]!='.'&&!checkVaild(board,gridI,gridJ,i,j)) return false;
                if((j+1)%3==0){
                   gridJ+=3;
                }
            }
            gridJ=2;
            if((i+1)%3==0){
                gridI+=3;
            }
        }
        return true;
    }
int main(){
  vector<vector<char>> b={{'8','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
  cout<<isValidSudoku(b)<<endl;
  return 0;
}