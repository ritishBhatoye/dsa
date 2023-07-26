#include<iostream>
using namespace std;
class Person{
public:
    int level;
    string name;
    Person(int level,string name){
        this->level=level;
        this->name=name;
    }
    Person(Person& temp){
        cout<<"COPY CONSTRUCTOR CALLED "<<endl;
        this->level=temp.level;
        this->name=temp.name;
    }
    void print(){
        cout<<"NAME IS  : "<<name<<endl;
        cout<<"LEVEL IS : "<<level<<endl;
    }
};
int main(){
    Person p(80,"RITISH");
    Person q(p);
    q.print();

    return 0;
}