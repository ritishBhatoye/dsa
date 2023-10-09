#include<iostream>
using namespace std;
//SINGLE INHERITANCE
class A{
    public:
    int height;
    int weight;

};
class B:public A{
    public:
   void setHeight(int height){
    this->height=height;
   }
   void setWeight(int weight){
    this->weight=weight;
   }
   int getHeight(){
    return this->height;
   }
   int getWeight(){
    return this->weight;
   }
};

int main(){
    B b;
    b.setHeight(6);
    b.setWeight(85);
    cout<<endl<<endl;
    cout<<"HEIGHT :- "<<b.getHeight()<<endl;
    cout<<"WEIGHT :- "<<b.getWeight()<<endl;
    cout<<endl<<endl;

    return 0;
}