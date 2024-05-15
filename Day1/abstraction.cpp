#include<bits/stdc++.h>
using namespace std;
class Shape{
    protected:
    float height;
    float width;
    virtual float getArea()=0; 
    public:
    Shape(float h,float w){
       height=h;
       width=w;
    }
};

class Rectangle:public Shape{
    Rectangle(float h,float w):Shape(h,w){

    }
    float getArea(){
        return this->height*this->width;
    }

};
class Triangle:public Shape{
    Triangle(float h,float w):Shape(h,w){

    }  
    float getArea(){
        return (1/2)*this->height*this->width;
    } 

};

int main(){
    // Triangle T;
    return 0;
}