#include<iostream>
using namespace std;
class Human{
public:
int height;
int weight;
};
class Person{
public:
    string quality;

};
class Male:public Human,public Person{
public:
string prof;
string color;
};
int main(){
    Male m;
m.height=6;
 m.weight=90;
m.quality="GOOD";
    m.prof="SDE ENGINEER ";
    m.color="BROWN";
    cout<<"PROFESSION : "<<m.prof<<endl;
    cout<<"HEIGHT     : "<<m.height<<endl;
    cout<<"WEIGHT     : "<<m.weight<<endl;
    cout<<"QUALITY    : "<<m.quality<<endl;
    cout<<"COLOR      : "<<m.color<<endl;
    return 0;
}