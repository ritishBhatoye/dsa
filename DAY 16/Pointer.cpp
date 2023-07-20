#include<iostream>
using namespace std;

int main(){
    int i=5;
    int* p=&i;
    int** p1=&p;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl;
    return 0;
} 