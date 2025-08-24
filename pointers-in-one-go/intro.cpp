#include<iostream>
using namespace std;

int main()
{
    int num=10;

    int* p=&num;
    cout<<endl<<endl;
    cout<<"Address of "<<&num<<endl;
    cout<<"Value at *p that is address of num :- "<<p<<endl;
    cout<<"Accessing the value of num using *p :- "<<*p<<endl;
    *p=*p+1;
    cout<<"Accessing num AFTER INCREASING num value through *p++ :- "<<num<<endl;
    cout<<endl<<endl;

 
    return 0;
}