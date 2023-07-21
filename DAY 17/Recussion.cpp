//finding 2^n expression value?
#include<iostream>
using namespace std;
int po(int base,int n){
   if(n==0){
    return 1;
   }
   else{
    return base*po(base,n-1);
   }
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER "<<endl;
    cin>>n;
    cout<<"ENTER THE POWER "<<endl;
    int p;
    cin>>p;
    cout<<po(n,p)<<endl;
    return 0;
}