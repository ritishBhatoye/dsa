//NULL POINTER
#include<iostream>
using namespace std;

int main(){
int a=10;
int *ptr=0;
ptr=&a;
cout<<a<<endl;
cout<<*ptr<<endl;
cout<<ptr<<endl;
    return 0;
}