#include<iostream>
using namespace std;
//GETTER AND SETTERS
class Hero{
    //PROPERTIES
    private:
    int health;
public:
char level;

void setHealth(int h){
health=h;
}
int getHealth(){
    return health;
}
void setLevel(char l){
    level=l;
}
char getLevel(){
    return level;
}
};

int main(){
    Hero h;
    cout<<endl<<endl<<endl;
    //setting values
    h.setHealth(100);
    h.setLevel('H');
    cout<<"LEVEL  : "<<h.getLevel()<<endl;
    cout<<"HEALTH : "<<h.getHealth()<<endl;
    cout<<endl;
    cout<<"SIZE OF HERO "<<endl;
    cout<<sizeof(h)<<endl;
    cout<<endl<<endl<<endl;
    return 0;
}