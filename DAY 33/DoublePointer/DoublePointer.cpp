#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<"ADDRESS OF a "<<p<<endl;
    cout<<"ADDRESS OF p "<<q<<endl;
    //PRINTING VALUE OF A
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    //PRINTING ADDRESS OF A
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

    //PRINTING ADDRESS OF P
    cout<<&p<<endl;
    cout<<q<<endl;
    return 0;
}