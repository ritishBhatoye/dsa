#include<iostream>
using namespace std;
//class
class Hero{
    public:
    //properties or MEMBER FUNCTION
    // char name[100];
    // int health;
    char level;
    int health;
};
int main(){
Hero h;
h.health=10;
h.level='H';
cout<<endl;
cout<<endl;
cout<<"HEALTH : "<<h.health<<endl;
cout<<"LEVEL  : "<<h.level<<endl;
cout<<endl;
    return 0;
}