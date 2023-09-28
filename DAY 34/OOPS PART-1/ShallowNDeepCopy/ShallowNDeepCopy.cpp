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
Student(Student& s){
char *ch=new char[strlen(s.name)+1];
strcpy(ch,s.name);
this->name=ch;
}
};

int main(){
    Student s;
    cout<<endl<<endl;
    char name[7]="RITISH";
    s.setName(name); 
    s.print();
    cout<<endl<<endl;

    //USE DEFAULT COPY CONSTRUCTOR
Student s1(s);
s1.print();
cout<<endl<<endl;
//STUDENT s ka name change
s.name[0]='K';
s.print();
s1.print();
    return 0;
}