#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"HELLO RAHUL "<<endl;
        }
    void sayHello(string s){
        cout<<"HELLO "<<s<<endl;
    }
};

int main(){
    A a;
    cout<<endl<<endl;
    cout<<endl<<endl;
    a.sayHello();
    a.sayHello("RITISH");
    cout<<endl<<endl;
    return 0;
}