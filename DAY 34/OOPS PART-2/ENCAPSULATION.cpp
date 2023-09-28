#include<iostream>
using namespace std;
class Student{
private:
string name;
int age;
int height;

public:
int getAge(){
    return this->age;
}
};
int main(){
    Student s;
 
    cout<<endl<<endl;

    cout<<"AGE : "<<s.getAge()<<endl;
    cout<<endl<<endl;
    
    return 0;
}