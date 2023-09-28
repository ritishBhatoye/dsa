#include<iostream>
using namespace std;
class Student{
public:
int age;
static int about;
static int random(){
   return about;
}
};
int Student::about=10;
int main(){
    cout<<endl<<endl;
cout<<Student::about<<endl; 
    cout<<endl<<endl;
    cout<<Student::random()<<endl;
    cout<<endl<<endl;
    

return 0;
}