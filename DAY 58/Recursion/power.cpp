#include<iostream>

using namespace std;

int p(int a,int b)
{
if(b==0){
    return 1;
}
else{
    return a*p(a,b-1);
}
}
int main()
{
    int a,b;
    cout<<endl<<endl;
    cout<<"ENTER A :- ";
    cin>>a;
    cout<<"ENTER B :- ";
    cin>>b;
    cout<<endl;
    cout<<"RESULT "<<p(a,b)<<endl;
    cout<<endl<<endl;

    return 0;
}