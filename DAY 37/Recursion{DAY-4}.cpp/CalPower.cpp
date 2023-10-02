#include<iostream>
using namespace std;

int Power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    //recursive call

    return a*Power(a,b-1);
}

int main(){
    int a,b;
    cout<<endl<<endl;

    cout<<"ENTER THE BASE  : "<<endl;
    cin>>a;
    cout<<"ENTER THE POWER : "<<endl;
    cin>>b;
    cout<<"RESULT : "<<Power(a,b)<<endl;
    cout<<endl<<endl;
    return 0;
}