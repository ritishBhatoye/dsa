//STATIC AND DYANAMIC ALLOCATION 
#include<iostream>
using namespace std;
class Person{
public:
int a;
};
int main(){
    //DYNAMIC ALLOCATION
    Person *p=new Person;
    (*p).a=10;
    cout<<(*p).a<<endl;
    //OR
    cout<<p->a<<endl;
    return 0;
}