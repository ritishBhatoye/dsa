//IF SAME FUNCTION ARE THERE 
#include<iostream>
using namespace std;
class A{
    public:
    void func(){
cout<<"I AM A "<<endl;
    }
};
class B{
    public:
void func(){
    cout<<"I AM B "<<endl;
}
};
class C:public A,public B{

};
int main(){
C c;
c.A::func();
c.B::func();
    return 0;
}