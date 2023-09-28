//SINGLE LEVEL INHERITANCE
#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }
    int getHeight(){
        return this->height;
    }
    int getWeight(){
        return this->weight;
    }
};

class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"MALE SLEEPING "<<endl;
    }

};

int main(){
   Male m;
   m.age=23;
   m.weight=75;
   m.color="BROWN SKIN";
   cout<<endl<<endl;
   cout<<"AGE    : "<<m.getAge()<<endl;
   cout<<"WEIGHT : "<<m.getWeight()<<endl;
   cout<<"COLOR  : "<<m.color<<endl;
   cout<<endl<<endl;
    return 0;
}