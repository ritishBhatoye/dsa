#include<iostream>
using namespace std;
class Human{
    public:
    int age;
    void speak(){
        cout<<"SPEAKING"<<endl;
    }
    void eat(){
        cout<<"EATING"<<endl;
    }
};
class Male:public Human{
    public:
    void sleeping(){
        cout<<"SLEEPING"<<endl;
    }
};
class MaleChild:public Male{
    public:
    int height;
    int weight;
    void playing (){
        cout<<"PLAYING "<<endl;
    }
};

int main(){
MaleChild mc;
mc.age=18;
mc.height=161;
mc.weight=75;
cout<<endl<<endl;
cout<<"AGE       : "<<mc.age<<endl;
cout<<"HEIGHT    : "<<mc.height<endl;
cout<<"WEIGHT    : "<<mc.weight<<endl;
mc.sleeping();
mc.speak();
cout<<endl<<endl;

    return 0;
}