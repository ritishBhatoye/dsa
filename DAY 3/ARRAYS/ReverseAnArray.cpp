#include<iostream>
using namespace std;
void reverse(int a[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<a[i]<<endl;
    }
}
int main(){
 int n;
 cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
 cin>>n;
 int a[20];
 cout<<"ENTER THE ELEMENT IN AN ARRAY YOU WANT INSERT "<<endl;
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
 for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
 }
 cout<<"REVERSED ARRAY : "<<endl;
 reverse(a,n);
    return 0;
}