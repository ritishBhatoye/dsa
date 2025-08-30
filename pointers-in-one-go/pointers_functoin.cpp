#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<"Address of P :- "<<p<<endl;
    cout<<"Valueof P :- "<<*p<<endl;

}

void update(int *p)
{
    *p=*p+1;

}

int main()
{
    int value=6;
    int *p=&value; 
    cout<<endl<<endl;

    print(p);
    cout<<endl<<endl;
    cout<<"Before : "<<*p<<endl;
    update(p);
    cout<<"After : "<<*p<<endl;

    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}