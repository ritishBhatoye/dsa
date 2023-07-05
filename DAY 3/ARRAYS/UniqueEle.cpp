#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE VALUE YOU WANT TO INSERT "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int  size){
    cout<<"ENTERRED VALUES : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
void unique_ele(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
   ans=ans^arr[i];
    }
    cout<<"UNIQUE ELEMENT IN THE ARRAY IS "<<ans<<endl;
}
int main(){
  int size;
  cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
  cin>>size;
  int arr[20];
  user_input(arr,size);
  print(arr,size);
  unique_ele(arr,size);
    return 0;
}