#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<"ADDRESS OF a "<<p<<endl;
    cout<<"ADDRESS OF p "<<q<<endl;
    return 0;
}