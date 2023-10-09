#include<iostream>
using namespace std;

class h{
    public:
    int height;
    

};
class w{
    public:
    int weight;
};
class Person:public h,public w{
public:
Person(int weight,int height){
    this->weight=weight;
    this->height=height;
}
};
int main(){
    Person p(100,6);
    cout<<endl<<endl;
    cout<<"WEIGHT : "<<p.weight<<endl;
    cout<<"HEIGHT : "<<p.height<<endl;
    cout<<endl<<endl;

    return 0;
}