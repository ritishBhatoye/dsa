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
void setWeight(int w){
    this->weight=w;
}
int getWeight(){
    return weight;
}
void setHeight(int h){
this->height=h;
}
int getHeight(){
    return height;
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
//  m.setWeight(93);
//  m.setHeight(6);
 m.color="BLACK";
 cout<<m.getAge()<<endl;
//  cout<<m.getWeight()<<endl;
//  cout<<m.getHeight()<<endl;

 cout<<m.color<<endl;
 cout<<m.sleep()<<endl;
    return 0;
}