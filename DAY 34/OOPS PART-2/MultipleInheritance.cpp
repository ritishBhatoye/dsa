#include<iostream>
using namespace std;
class Human{
    public:
    int height;
   
    void drinking(){
        cout<<"I AM DRINKING "<<endl;
    }
};
class Male{
public:
int weight;
void eating(){
    cout<<"I AM EATING "<<endl;
}
};
class Child:public Human,Male{
    public:
    int age;
    void setAge(int age){
    this->age=age;
    }
    int getAge(){
        return this->age;
    } 
    void setWeight(int weight){
        this->weight=weight;
    }
    int getWeight(){
        return this->weight;
    }
    void setHeight(int height){
     this->height=height;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
Child c;
c.setAge(19);
c.setWeight(80);
c.setHeight(161);
cout<<"AGE    : "<<c.getAge()<<endl;
cout<<"WEIGHT : "<<c.getWeight()<<endl;
cout<<"HEIGHT : "<<c.getHeight()<<endl;
    return 0;
}