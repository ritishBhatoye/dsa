#include<iostream>
using namespace std;
int p(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    else{
        return 2*p(n-1);
    }
}
int main()
{
    cout<<endl<<endl;
    int n;
    cin>>n;
    cout<<"RESULT :- "<<p(n)<<endl;
    cout<<endl<<endl;

    return 0;
}