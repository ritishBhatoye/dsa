#include<iostream>
using namespace std;
class Animal{
    public:
    string cat;
    string color;
    int age;
};
class Dog:public Animal{
    public:
    string breed;
};
int main(){
    Dog d;
    d.cat="DOG";
    d.color="BLACK";
    d.age=9;
    d.breed="ROT-WIELLER";
    cout<<"CATEGORY : "<<d.cat<<endl;
    cout<<"COLOR    : "<<d.color<<endl;
    cout<<"AGE      : "<<d.age<<endl;
    cout<<"BREED    : "<<d.breed<<endl;
    return 0;
}