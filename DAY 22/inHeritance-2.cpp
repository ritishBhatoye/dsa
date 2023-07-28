#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
  this->weight=w;       
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
    m.age=20;
     m.setWeight(90);
    cout<<"AGE    : "<<m.age<<endl;
    cout<<"WEIGHT : "<<m.height<<endl;
    cout<<"HEIGHT : "<<m.weight<<endl;
    cout<<"COLOR  : "<<m.color<<endl;
    m.sleep();
    return 0;
}