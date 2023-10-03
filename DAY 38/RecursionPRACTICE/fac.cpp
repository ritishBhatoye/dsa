#include<iostream>
using namespace std;

//FACTORIAL
int fac(int n){
    //base case
    if(n==1){
        return 1;
    }
    //recursive call
    return n*fac(n-1);
}

int main(){
int n;
cout<<endl<<endl;
    cout<<"ENTER THE NUMBER TO FIND RECURSIVE RELATION "<<endl;
    cin>>n;
    cout<<"RESULT : "<<fac(n)<<endl;
cout<<endl<<endl;

    return 0;
}