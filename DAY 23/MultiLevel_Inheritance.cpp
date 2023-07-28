#include<iostream>
using namespace std;
class Human{
    public:
    int age;
    int weight;
};
class Male:public Human{
    public:
    string name;
};
class Prof:public Male{
    public:
    string post;
    void p(){
        cout<<"POST :- "<<post<<endl;
    }
};
int main(){
    Prof p;
    p.age=24;
    p.weight=90;
    p.name="RITISH BHATOYE";
    p.post="SDE ENGINEER";
    cout<<"NAME   : "<<p.name<<endl;
    cout<<"AGE    : "<<p.age<<endl;
    cout<<"WEIGHT : "<<p.weight<<endl;
    cout<<"POST   : "<<p.post<<endl;
    return 0;
}