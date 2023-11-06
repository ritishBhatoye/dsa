#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int ans;
    ans=n%10;
    n=n/10;
    ans+=sumOfDigits(n);
    return ans;
}

int main()
{
    cout<<endl<<endl;
    int n;
    cout<<"ENTER THE NUMBER "<<endl;
    cin>>n;
    cout<<endl<<endl;
    cout<<endl;
    cout<<"SUM : "<<sumOfDigits(n)<<endl;
    cout<<endl<<endl;

    return 0;
}