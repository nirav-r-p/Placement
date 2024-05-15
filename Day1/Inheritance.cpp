#include<bits/stdc++.h>
using namespace std;

class Person{
    
    string name;
    int age;
    public:
    Person(){
        cout<<"Create Object"<<endl;
    }
    Person(string name){
        (*this).name=name;
    }
    string getName(){
        return this->name;
    } 
    void setName(string name){
        this->name=name;
    }
    int getAge(){
        return this->age;
    } 
    void setAge(int age){
        this->age=age;
    }
};
class Student:public Person{
   int rno;
   vector<string> subject;
   public:
   Student(string name,int age){
       this->setName(name);
       this->setAge(age);
   }
   void setRNo(int rno){
       this->rno=rno;
   }
   int getRNo(){
       return this->rno;
   }
    void addSubject(string subject){
       this->subject.push_back(subject);
   }
   void getSubject(){
       for (int i = 0; i < this->subject.size(); i++)
       {
          cout<<(this->subject)[i]<<" ";
       }
       cout<<endl;
   }
   void setSubject(vector<string> sub){
        this->subject.clear();
        for (int i = 0; i < sub.size(); i++)
       {
          this->subject.push_back(sub[i]);
       }
   }
};
int main(){
   Person *s = new Person();
   cout<<s->getName()<<" "<<s->getAge()<<endl;
   s->setName("Nirav");
   s->setAge(18);
   cout<<s->getName()<<" "<<s->getAge()<<endl;

   Student *st=new Student("Nirav",18);
   st->setRNo(51);
   st->setSubject({"C++","DBMS","CN"});
   st->getSubject();
   return 0; 
}




//new => to allocate memory for particuler entity.
//Q-> how to print hello world without write in main Function.
//ans:
// class Student{
//     public:
//     string name;
//     int roll;
//     Student(){
//         cout<<"Create Object"<<endl;
//     }
     
    
// }st;// ans of the question;

// int main(){
   
//    return 0; 
// }


//static->in stack if allocated variable is out of scope then memory is free  vs dynemic->in heap memory  here ve menualy deallcated memory.
//delete is operator 1. call destructer of object then free memory vs free is method  1.not call destructer

/*
OOPS :
1. Abstraction (hide unneccary infomation form the enduser)
   : achived by using access modifier
2. Inheritance (use IS a relation. To achive do'nt repeat yourself)
   : achive by using ':' opearator.
3. data Encapsulation 

4. Polymorphism (one entity but many form)
*/
