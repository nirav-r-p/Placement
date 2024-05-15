#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real , img;

    // oprator overloading 
    Complex operator+(Complex c1){
        Complex c2;
        c2.real=this->real+c1.real;
        c2.img=this->img+c1.img;
        return c2;
    }
    void print(){
        cout<<this->real<<" "<<this->img<<endl;
    }
};
int main(){
    Complex c1={1,2} ,c2={3,8},c3;
    c3=c1+c2;
    c3.print();
    return 0;
}