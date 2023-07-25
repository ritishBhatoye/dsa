#include<iostream>
using namespace std;
class Hero{
    //PROPERTIES
    public:
    int health;
    char m;
    void print(){
        cout<<"LEVEL "<<m<<endl;
    }
};
int main(){
    Hero a;
    a.health=80;
    a.m='H';
    cout<<"HEALTH IS "<<a.health<<endl;
    cout<<"LEVEL  IS "<<a.m<<endl;
    return 0;
}