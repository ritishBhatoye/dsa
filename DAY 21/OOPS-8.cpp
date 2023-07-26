#include<iostream>
using namespace std;
class Person{
    public:
    int health;
    string name;
// Person(string name,int health){
//      cout<<name<<endl;
//     cout<<health<<endl;
    
// }
};
int main(){
Person p;
p.name="HARRY";
p.health=90;
//COPY CONSTRUCTOR
Person q(p);
cout<<q.health<<endl;
cout<<q.name<<endl;
    return 0;
}