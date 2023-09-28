#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
    char getLevel(){
        return level;
    }
    void setLevel(char l){
        level=l;
    }
    
};

int main(){
//STATIC ALLOCATION
Hero h;
h.setHealth(100);
h.setLevel('H');
cout<<endl<<endl;
cout<<"LEVEL  : "<<h.getLevel()<<endl;
cout<<"HEALTH : "<<h.getHealth()<<endl;
cout<<endl<<endl;

//DYNAMIC ALLOCATION
Hero *b=new Hero;
(*b).setHealth(100);
(*b).setLevel('H');
cout<<endl<<endl;
cout<<"LEVEL   : "<<(*b).getLevel()<<endl;
cout<<"HEALTH  : "<<(*b).getHealth()<<endl;
cout<<endl<<endl;
//or
cout<<"LEVEL   : "<<b->getLevel()<<endl;
    return 0;
}