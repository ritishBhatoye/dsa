#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;
    Student(string s,int a){
        name=s;
        age=a;
         cout<<"NAME "<<name<<endl;
        cout<<"AGE  "<<age<<endl;
    }
    // void getInfo(){
       
    // }
    
};

int main(){
  cout<<endl<<endl;
    Student s("RITISH",17);
    // s.getInfo();
  cout<<endl<<endl;

    return 0;
}