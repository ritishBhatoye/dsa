#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return n;
    }
    int r1=fib(n-1);
    int r2=fib(n-2);
    int ans=r1+r2;
    return ans;
}
int main(){
    int n;
    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER "<<endl;
    
    cin>>n;
    cout<<fib(n);
    cout<<endl<<endl;

}