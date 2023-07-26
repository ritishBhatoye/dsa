//COPY ASSIGNMENT OPERATOR
#include<iostream>
using namespace std;
class person{
    public:
    int health;
    string name;
    char level;
    person(string name,char level,int health){
        this->health=health;
        this->name=name;
        this->level=level;
    }
    void print(){
        cout<<"NAME IS : "<<name<<endl;
        cout<<"HEALTH IS : "<<health<<endl;
        cout<<"LEVEL IS : "<<level<<endl;
    }
};
int main(){
    person p("RITISH",'H',86);
    person q("RAHUL",'L',95);
    p.print();
    cout<<"ANOTHER OBJECT "<<endl;
    q.print();
    //COPYING ALL THE VALUES OF MEMBER FROM THE Q OBJECT TO P OBJECT
    p=q;
    p.print();
    q.print();
    return 0;
}