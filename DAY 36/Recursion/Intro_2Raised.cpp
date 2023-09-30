#include<iostream>
using namespace std;
int solve(int n){
    if(n>=1)
   { 
    return 2*solve(n-1);
    }
}
int main(){
    int n;
    cout<<"For 2^n  "<<endl;
    cout<<"Enter the value of n : "<<endl;
    cout<<endl;
    cin>>n;
    cout<<"RESULT : "<<solve(n)<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    return 0;
}