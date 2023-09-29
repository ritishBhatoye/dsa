#include<iostream>
using namespace std;
class A{
public:
void fun(){
    cout<<"I AM INSIDE CLASS A "<<endl;
}
};
class B{
    public:
    void fun(){
        cout<<"I AM INSIDE CLASS B "<<endl;
    }
};
class C:public A,public B{
};
int main(){
    C c;
    cout<<endl<<endl;
    c.A::fun();
    c.B::fun();
    cout<<endl<<endl;

    return 0;
}