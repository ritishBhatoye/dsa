#include<iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive call
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cout<<endl<<endl;
    cout<<"ENTER THE TERM "<<endl;
    cin>>n;
    cout<<"NUMBER "<<fib(n)<<" IS PRESENT ON "<<n<<" TH POSITION "<<endl;
    cout<<endl<<endl;
    
    return 0;
}