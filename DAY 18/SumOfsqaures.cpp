#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE ELEMENT IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int size){
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int SumSq(int arr[]){
    int n=sizeof(arr)/sizeof(arr[0]);
    long long ans=0;
    
  for(int i=0;i<=n;++i){
        ans=ans+(arr[i]*arr[i]);
    }
    return ans;
}
int main(){
    int n;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>n;
    int arr[10];
    user_input(arr,n);
    print(arr,n);
    cout<<SumSq(arr)<<endl;
    return 0;
}