#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> path;
void printPath(vector<vector<int>> v){
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"----------"<<endl;
}
bool pathIsPossible(vector<vector<int>> v,int n,int m,int i=0,int j=0){
    if(i>=n || j>=m) return false;
    if(i==n-1 && j==m-1){ 
        path[i][j]=1;
        printPath(path);
        return true;
    }
    if(v[i][j]!=1){
        path[i][j]=1;
        return pathIsPossible(v,n,m,i+1,j) || pathIsPossible(v,n,m,i,j+1);
    }
    path[i][j]=0;
    return false;
}
void pathAllIsPossible(vector<vector<int>> v,int n,int m,int i=0,int j=0){
    if(i>=n || j>=m) return;
    if(i==n-1 && j==m-1){ 
        path[i][j]=1;
        printPath(path);  
    }
    if(v[i][j]!=1){
        path[i][j]=1;
        pathAllIsPossible(v,n,m,i+1,j) ;
        pathAllIsPossible(v,n,m,i,j+1);
    }
    path[i][j]=0;  
}
int main(){
    vector<vector<int>> v={{0,0,0,0,1},{0,1,1,0,0},{0,1,1,0,1},{0,0,0,0,0}};
    cout<<"Matrix:"<<endl;
    printPath(v);
    path.assign(4,vector<int>(5,0));
    cout<<"For single Path:"<<endl;
    pathIsPossible(v,4,5)?cout<<"true"<<endl:cout<<"false"<<endl;
    cout<<"_____"<<endl;
    cout<<"For All Path:"<<endl;
    pathAllIsPossible(v,4,5);
    return 0;
}
