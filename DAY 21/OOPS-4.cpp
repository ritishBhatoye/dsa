#include<iostream>
using namespace std;
class Person{
private:
int health;
char level;
public:
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
    Person p;
    p.setLevel('H');
    p.setHealth(82);
    cout<<"LEVEL IS  "<<p.getLevel()<<endl;
    cout<<"HEALTH IS "<<p.getHealth()<<endl;
    return 0;
}