#include<iostream>
using namespace std;
int fac(int n){
//base case
if(n==0){
    return 1;
}
//recusive call
return n*fac(n-1);
}
int main(){
    int num;
    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER TO FIND FACTORIAL : "<<endl;
    cin>>num;
    cout<<"FACTORIAL OF "<<num<<" : "<<fac(num)<<endl;
    cout<<endl<<endl;

    return 0;
}