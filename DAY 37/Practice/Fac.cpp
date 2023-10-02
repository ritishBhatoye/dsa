#include<iostream>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }
    //recursive call
    return n*fac(n-1);
}

int main(){

    int n;
    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER TO FIND FACTORIAL "<<endl;
    cin>>n;
    cout<<"RESULT : "<<fac(n)<<endl;
    cout<<endl<<endl;
    return 0;
}