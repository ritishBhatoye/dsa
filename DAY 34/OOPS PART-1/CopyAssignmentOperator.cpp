#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(string name)
    {
        this->name=name;
    }
    void print(){
        cout<<"NAME "<<this->name<<endl;
    }
};

int main(){
    cout<<endl<<endl;
    Student s("RAHUL");
    Student s1("RITISH");
    //BY USING COPY ASSIGNMENT OPERATOR WE CAN COPY DATA VALUE OF "s1" OBJECT to the "s" OBJECT
    s=s1;
    s.print();
    s1.print();
    cout<<endl<<endl;
    return 0;
}