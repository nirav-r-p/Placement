#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    Student(string name,int marks){
       this->name=name;
       this->marks=marks;
    }
    string getStudentName(){
        return this->name;
    }
    int getStudentMarks(){
        return this->marks;
    }
    bool operator >= (Student s){
        return (this->marks)<s.marks;
    }
};

void sortAccordingToMarks(vector<Student>& st){
    for (int  i = 0; i < st.size(); i++)
    {
         for (int j = 0; j < st.size()-i-1; j++)
        {
            /* code */
            if(st[j]>=st[j+1]){
                swap(st[j],st[j+1]);
            }
        }
         
    }
}

int main(){
    vector<Student> st;
    int n;
    cout<<"Number of Student";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int mark;
        cout<<"Enter Student Details:";
        cin>>name>>mark;
        Student *s=new Student(name,mark);
        st.push_back(*s);
    }
    sortAccordingToMarks(st);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<st[i].getStudentName()<<" Rank "<<i+1<<endl;
    }
    return 0;
    
}