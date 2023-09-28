#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    Student(string name,int age){
        this->name=name;
        this->age=age;
    }
};
int main(){
    Student St("RAHUL",18);
    //COPYING St OBJECT'S DATA VALUES TO S OBJECT
    Student S(St);
    cout<<endl<<endl;
    cout<<"ST NAME "<<St.name<<endl;
    cout<<"ST AGE  "<<St.age<<endl;
    cout<<endl<<endl;
    cout<<"S NAME "<<S.name<<endl;
    cout<<"S AGE  "<<S.age<<endl;

    cout<<endl<<endl;

    return 0;
}