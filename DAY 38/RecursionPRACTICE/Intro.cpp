//
#include<iostream>
using namespace std;

int pow(int n){
//BASE CASE
if(n==0){
    return 1;
}
//recursive call
return 2*pow(n-1);
}

int main(){
    int n;
    cout<<endl<<endl;

    cout<<"ENTTER THE POWER FOR 2^n : "<<endl;
    cin>>n;
    cout<<"RESULT : "<<pow(n)<<endl;
    cout<<endl<<endl;
return 0;
}