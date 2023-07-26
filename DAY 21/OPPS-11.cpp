#include<iostream>
using namespace std;
class Person{
    public:
    Person(){
        cout<<"CONSTRUCTOR IS CALLED"<<endl;
    }
    ~Person(){
        cout<<"DESTRUCTOR IS CALLED "<<endl;
    }
};
int main(){
//Static allocation:- DESTRUCTOR CAN BE CALLED AUTOMATICALLY
Person p;
//Dynamic Allocation:- CONSTRUCOR CAN BE CALLED MUNUALLY 
Person *n=new Person;
//MANUALLY
delete n;
    return 0;
}