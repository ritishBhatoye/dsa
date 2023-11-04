#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return (fib(n-1)+fib(n-2));
}

int main()
{
    int n;
    cin>>n;
    cout<<endl<<endl; 
    cout<<fib(n)<<endl;
    cout<<endl<<endl;


    return 0;
}