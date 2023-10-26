#include<iostream>
using namespace std;

int fac(int n){
    if(n==1 || n==0){
        return 1;
    }
    else
    {

        return n*fac(n-1);
    }
}
int main(){
    cout<<endl<<endl;
   int ans=0;

   int a;
   cin>>a;
   cout<<fac(a)<<endl;
    cout<<endl<<endl;

    return 0; 
}