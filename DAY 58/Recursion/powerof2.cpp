#include<iostream>
using namespace std;

int p(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    //recursive call
    return 2*p(n-1);
}
int main(){
    int n;
    cout<<endl<<endl;

    cout<<"2^n"<<endl;
    cout<<"n : ";
    cin>>n;
    cout<<"2^n : "<<p(n)<<endl;
    cout<<endl<<endl;
    return 0;
}