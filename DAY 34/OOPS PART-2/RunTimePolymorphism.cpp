#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"SPEAKING "<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"BARKING "<<endl;
    }
};

int main(){
    Animal a;
    cout<<endl<<endl;
    a.speak();
    Dog d;
    d.speak();
    cout<<endl<<endl;

    return 0;
}