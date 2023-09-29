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
    void setHeight(int height){
        this->height=height;
    }
    int getHeight(){
        return this->height;
    }
    void setWeight(int weight){
     this->weight=weight;
    }
    int getWeight(){
        return this->weight;
    }
    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return this->age; 
    }
    void playing (){
        cout<<"PLAYING "<<endl;
    }
};

int main(){
MaleChild mc;
mc.setAge(18);
mc.setHeight(161);
mc.setWeight(75);
cout<<endl<<endl;
cout<<"AGE       : "<<mc.getAge()<<endl;
cout<<"HEIGHT    : "<<mc.getHeight()<<endl;
cout<<"WEIGHT    : "<<mc.getWeight()<<endl;
mc.sleeping();
mc.speak();
cout<<endl<<endl;

    return 0;
}