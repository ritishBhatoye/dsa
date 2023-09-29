#include<iostream>
using namespace std;

class A{
    public:
    int area(int l,int b){
        return l*b;
    }
    int area(int l,int b,int h){
        int a=2*((l*b) +(b*h) +(h*l));
        return a;
    }
    int area(int s){
        return s*s;
    }
};

int main(){
A a;
int l;
int b;
int h;
cout<<" ENTER LENGTH : "<<endl;
cin>>l;
cout<<"AREA OF SQUARE : "<<a.area(l)<<endl;
cout<<" ENTER BREADTH : "<<endl;
cin>>b;
cout<<"AREA OF RECTANGLE "<<a.area(l,b)<<endl;
cout<<" ENTER HEIGHT : "<<endl;
cin>>h;
cout<<"AREA OF CUBE "<<a.area(l,b,h)<<endl;
    return 0;
}
