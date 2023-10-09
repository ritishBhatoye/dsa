#include<iostream>
using namespace std;

class A{
    public:
    int weight;
    
};
class B:public A{
    public:
    int height;
};
class C:public B{
    public:
    string name;
};
class D:public C{
    public:
    D(int weight,int height,string name){
        this->height=height;
        this->weight=weight;
        this->name=name;
    }
};
int main(){
    D d(100,6,"RITISH");
    cout<<endl<<endl;
    cout<<"WEIGHT : "<<d.weight<<endl;
    cout<<"HEIGHT : "<<d.height<<endl;
    cout<<"NAME   : "<<d.name<<endl;
    cout<<endl<<endl;

    return 0;
}