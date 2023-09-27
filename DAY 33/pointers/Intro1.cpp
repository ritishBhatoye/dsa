#include<iostream>
using namespace std;
int main(){
    int num=10;
    int *a=&num;
    cout<<"ADDRESS OF NUM    : "<<a<<endl;
    cout<<"VALUE OF NUM      : "<<*a<<endl;
    cout<<"ADDRESS OF A(ptr) : "<<&a<<endl; 
    cout<<"SIZE OF POINTER   : "<<sizeof(&num)<<endl;
    cout<<"SIZEN OF POINTER  : "<<sizeof(a)<<endl; 
    return 0;
}