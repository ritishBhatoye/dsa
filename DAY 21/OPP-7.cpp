#include<iostream>
using namespace std;
class Person{
    public:
    int health;
    Person(int health){
         cout<<health<<endl;
        this->health=health;
    }
};
int main(){
    Person p(10);
    return 0;
}