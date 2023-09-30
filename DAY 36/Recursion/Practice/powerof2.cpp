#include<iostream>
using namespace std;

int solve(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive call
    return 2*solve(n-1);
}
int main(){
    cout<<"For 2^n "<<endl;
    cout<<endl<<endl;
    cout<<"Enter the value of n "<<endl;
    int n;
    cin>>n;
    cout<<"RESULT : "<<solve(n)<<endl;
    cout<<endl<<endl;

    return 0;
}