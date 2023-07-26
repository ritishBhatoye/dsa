#include<iostream>
using namespace std;
class person{
    public:
    int health;
    string name;
    char level;
    person(int health,string name,char level){
        this->health=health;
        this->name=name;
        this->level=level;
    }
};
int main(){
    return 0;
}