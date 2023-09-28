#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    // Student(string name){
    //     this->name=name;
    // }
    Student(){
        cout<<"DEFAULT CONSTRUCTOR CALLED "<<endl;
    }
};
int main(){
    Student St;
    
    return 0;
}