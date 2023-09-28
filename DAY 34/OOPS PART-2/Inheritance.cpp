#include<iostream>
using namespace std;
class A{
    public:
    void eat(){
        cout<<"EATING "<<endl;
    }
};
class B:public A{
    public:
    void bark(){
        cout<<"BARKING "<<endl;
    }
};
int main(){
    B b;
    cout<<endl<<endl;
   b.eat();
   b.bark();
     cout<<endl<<endl;

    return 0;
}