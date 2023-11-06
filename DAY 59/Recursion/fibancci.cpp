#include<iostream>
using namespace std;

int fib(int a){
    if(a==0 ){
        return 0;
    }
    if(a==1){
        return 1;
    }
    else{
        return (fib(a-1)+fib(a-2));
    }
}

int main(){
    int n;
    cout<<endl<<endl;
    cin>>n;
    cout<<"RESULT : "<<fib(n)<<endl;
    cout<<endl<<endl;
    
    return 0;
}