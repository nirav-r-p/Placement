#include<bits/stdc++.h>
using namespace std;
bool is(vector<long long> v,int n,long long k,long long m){
    long long tans=0;
    for (int i = n/2; i < n; i++)
    {
       if(v[i]<m){
         tans+=(m-v[i]);
       }
    }
    return tans<=k;
}
int main(){
    int n;
    cin>>n;
    long long k;cin>>k;
    vector<long long> v(n);
    for(int i=0;i<n;i++){ cin>>v[i];}
    sort(v.begin(),v.end());
    long long l=1,end=2*(1e10);
    long long ans=0;
    while (l<=end)
    {
        long long m=l+(end-l)/2;
        if(is(v,n,k,m)){
            ans=m;
            l=m+1;
        }else{
            end=m-1;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}