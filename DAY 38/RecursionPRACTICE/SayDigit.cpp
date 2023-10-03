#include<iostream>
using namespace std;

void SayDigit(int n,string *arr){
    //BASE CASE
    if(n==0){
    return ;
    }
    int digit=n%10;
    n=n/10;
  
    //RECURSIVE CALL
    SayDigit(n,arr);
    cout<<arr[digit]<<" ";

}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"ENTER THE NUMBER : "<<endl;
    int n;
    cin>>n;
    SayDigit(n,arr);
    return 0;
}