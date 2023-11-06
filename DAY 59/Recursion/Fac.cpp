#include<iostream>
using namespace std;

int fac(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

int main()
{
    cout<<endl<<endl;
    int n;
    cin>>n;
    cout<<"RESULT : "<<fac(n)<<endl;
    cout<<endl<<endl;

    return 0;
}