#include<iostream>
using namespace std;

int Power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    //recursive call

    return a*Power(a,b-1);
}
//LOVE BABBAR SIR JI APPROACH
int powOptimalAp(int a,int b){

    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //recursive call
    int ans=powOptimalAp(a,b/2);
    if(b%2==0){
        //if b  is even
        return ans*ans;
    }
    else{
        //if b is odd
        return a*ans;
    }
}

int main(){
    int a,b;
    cout<<endl<<endl;

    cout<<"ENTER THE BASE  : "<<endl;
    cin>>a;
    cout<<"ENTER THE POWER : "<<endl;
    cin>>b;
    cout<<"RESULT : "<<Power(a,b)<<endl;
    cout<<endl<<endl;
    return 0;
}