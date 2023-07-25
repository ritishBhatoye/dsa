#include<iostream>
using namespace std;
class Person{
    public:
    int health;
    char level;
    
    Person(int health,char level){
        //cout<<"THIS "<<this<<endl;
        this->health=health;
        this->level=level;
        cout<<health<<endl;
        cout<<level<<endl;
    }
};
int main(){
    Person temp(100,'H');
   // cout<<"SIZE OF AN OBJECT "<<&p<<endl;
    return 0;
}