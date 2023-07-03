#include<iostream>
using namespace std;
bool ifPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
    return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    cout<<"ENTER A NUMBER TO CHECK IF IT IS PRIME OF NOT"<<endl;
    cin>>a;
    if(ifPrime(a)){
        cout<<a<<" is  a PRIME number"<<endl;
    }
    else{
        cout<<a<<" is NOT a PRIME NUMBER"<<endl;
    }
    return 0;
}