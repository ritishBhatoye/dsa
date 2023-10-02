#include<iostream>
using namespace std;

int fibnacci(int n){
    //base case
    if(n==1 || n==0){
     return n;
    }
    //recursive call
    return fibnacci(n-1)+fibnacci(n-2);
}

int main(){
    int n;
    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER TO FIND ON THE "<<n<<"th TERM "<<endl;
    cin>>n;
    cout<<"FIBANNCI NUMBER : "<<fibnacci(n)<<endl;
    cout<<endl<<endl;

    return 0;
}