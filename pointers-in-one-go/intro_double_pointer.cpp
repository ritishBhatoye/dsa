#include<iostream>
using namespace std;

int main()
{
    int num=10;

    int* p=&num;
    int* q=p;

    cout<<" p - "<<p<<endl;
    cout<<" q - "<<q<<endl;
    
    cout<<endl<<endl;
    cout<<"*p - "<<*p<<endl;
    cout<<"*q - "<<*q<<endl;
    *q=*q+1;
    cout<<"After increasing *q :- "<<num<<endl;
    cout<<endl<<endl;

 
    return 0;
}