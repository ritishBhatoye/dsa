#include<iostream>
using namespace std;
class Student{
    public:
    Student(){
        cout<<endl<<endl;
        cout<<"CONSTRUCTOR IS CALLED "<<endl;
    }
    ~Student(){
        cout<<endl;
        cout<<"DESTRUCTOR IS CALLED "<<endl;
        cout<<endl<<endl;
    }
};
int main(){
    Student s1;
    return 0;
}