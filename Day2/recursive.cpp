#include<bits/stdc++.h>
using namespace std;


//tail recursion : In recursive function the last call or statment is recursive function (only one).
// int power(int p,int x){
//     if(p==0) return 1;
//     return x*power(p-1,x);
// }
// int main(){
//     int x=2,p=3;
//     cout<<power(p,x)<<endl;
//     return 0;
// }

//TC:O(n) , SC:O(n) if ther is tail recurive then SC:O(1)
//try to Solve in O(logn) using fast power function


// int power(int x,int p){
//     if(p==1) return x;
//     if(p%2==0) return power(x*x,p/2);
//     return x* power(x*x,(p-1)/2);
// }
// int main(){
//     int x=2,p=5;
//     cout<<power(x,p)<<endl;
//     return 0;
// }


//print 1 to N using recursive

// void printN(int n){
//     if(n==0) return;
//     printN(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     printN(5);
//     return 0;
// }



// linear search using recursive


// int findIndex(int e,vector<int> v,int curIndex){
//     if(curIndex<0)  return -1;
//     if(e==v[curIndex]) return curIndex;
//     return findIndex(e,v,curIndex-1);
// }

// int main(){
//     vector<int> v={1,5,8,3,6,7,2};
//     cout<<findIndex(3,v,v.size());
//     return 0;
// }


//using complex method-arr pointer


// int findIndex(int arr[],int n,int element){
//     if(n==0) return -1;
//     if(arr[0]==element) return n;
//     return findIndex(arr+1,n-1,element);
// }
// int main(){
//     int arr[]={1,6,8,2,6,5};
//     int n=6;
//     int res=findIndex(arr,n,6);
//     if(res!=-1) cout<<n-res<<endl;
//     else cout<<-1<<endl;
//     return 0;

// }



// //generate all substring using recursive
// vector<string> sub;
// void generateSubSeq(string s,int index=0,string g=""){
//     if(index==s.length()){
//         cout<<"-- ans: "<<g<<endl;
//         sub.push_back(g); return;
//     }
//     g.push_back(s[index]);
//     generateSubSeq(s,index+1,g);
//     g.pop_back();
//     generateSubSeq(s,index+1,g);
// }

// int main(){
//     string s="abcd";
//     generateSubSeq(s);
//     cout<<"All Subseq: ";
//     for (int i = 0; i < sub.size(); i++)
//     {
//        if(sub[i]!="") cout<<sub[i]<<" ";
//        else cout<<"empty";
//     }
    
// }


//generate all permutation

// void generateAllpermutation(string s,int n,int index=0)
// {
//     if(index==n){cout<<s<<endl; return;}
//     for (int i = index; i < n; i++)
//     {
//         swap(s[i],s[index]);
//         generateAllpermutation(s,n,index+1);
//         swap(s[i],s[index]);
//     }
// }


// int main(){
//     generateAllpermutation("abcd",4);
//     return 0;
// }





