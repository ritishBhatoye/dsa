#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<" Hello Rahul Bhatoye "<<endl;
    }
    void sayHello(string name){
cout<<" HELLO "<<name<<endl;
    }
};

int main(){
    A a;
    a.sayHello();
    a.sayHello("RITISH");
    return 0;
}