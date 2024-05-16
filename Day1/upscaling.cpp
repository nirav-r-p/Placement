#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool f1=true;
    for (int i = 0; i < 2*n; i++)
    {
        bool flag=f1;
        for (int  j = 0; j < 2*n; j++)
        {
            if(flag){
                cout<<"#";
            } else{
              cout<<".";
            }
            if((j+1)%2==0) flag=!flag;
        }
        cout<<endl;
        if((i+1)%2==0) f1=!f1;
        
    }
        
}