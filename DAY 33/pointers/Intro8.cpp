#include<iostream>
using namespace std;
int main(){
    int a=10;
    int c=10;
    int *p=&c;
    cout<<"BEFORE "<<p<<endl;
    p++;
    cout<<"AFTER  "<<p<<endl;
    return 0;
}