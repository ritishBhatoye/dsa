#include<iostream>
using namespace std;
class Student{
public:
int age;
char *name; 
Student(){
    cout<<"DEFAULT CONSTRUCTOR IS CALLED "<<endl;
    name=new char[100];
}
void setName(char name[]){
    strcpy(this->name,name);
}
void print(){
    cout<<"NAME : "<<this->name<<endl;
}
};

int main(){
    Student s;
    cout<<endl<<endl;
    char name[7]="RITISH";
    s.setName(name);
    s.print();
    cout<<endl<<endl;
    return 0;
}