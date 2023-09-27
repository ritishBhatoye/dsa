//COPYING A POINTER
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    //copying a POINTER 
    int *q=p;
    cout<<"P : "<<p<<endl;
    cout<<"Q : "<<q<<endl;
    return 0;
}