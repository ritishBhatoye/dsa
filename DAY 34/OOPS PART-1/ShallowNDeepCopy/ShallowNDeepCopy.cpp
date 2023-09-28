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
};
int main(){
    return 0;
}