#include<iostream>
using namespace std;

int sq(int n){
if(n==0){
    return 1;
}
return 2*sq(n-1);
}

int main(){
int n;
cout<<endl<<endl;
cout<<"FOR 2^n "<<endl;
cout<<"ENTER THE NUMBER TO FIND SQUARE "<<endl;
cin>>n;
cout<<"RESULT : "<<sq(n);
cout<<endl<<endl;

    return 0;
}