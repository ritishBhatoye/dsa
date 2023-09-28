#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student(string name){
        this->name=name;
        cout<<"NAME "<<this->name<<endl;
    }
};
int main(){
    cout<<endl<<endl;
    Student *st=new Student("RITISH"); 
    cout<<endl<<endl;
    return 0;
}