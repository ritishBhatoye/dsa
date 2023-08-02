//RUNTIME POLYMORPHISM :- METHOD OVERRIDING
#include<iostream>
using namespace std;
class A{
public:
  void speak(){
  cout<<"A IS SPEAKING "<<endl;
  }
};
class B:public A{
    public:
    void speak(){
        cout<<"B IS SPEAKING "<<endl;
    }
};
int main(){
    A a;
    B b;
    b.speak();
    a.speak();
    return 0;
}