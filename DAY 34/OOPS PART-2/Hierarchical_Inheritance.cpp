#include<iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"INSIDE A "<<endl;
    }
};
class B:public A{
    public:
    void fun2(){
        cout<<"INSIDE B "<<endl;
    } 
};

class C:public A{
public:
void fun3(){
    cout<<"INSIDE C "<<endl;
}
};

int main(){
  
  C c;
  cout<<endl<<endl;
  c.fun1();
  c.fun3();
   B b;
   b.fun1();
   b.fun2();
  cout<<endl<<endl;
    return 0;
}