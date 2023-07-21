#include<iostream>
using namespace std;
int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int main(){
int n;
cout<<"ENTER THE NUMBER TO FIND FACTORIAL "<<endl;
cin>>n;
cout<<"FACTORIAL OF "<<n<<" : "<<fac(n)<<endl;
    return 0;
}