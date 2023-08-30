#include<iostream>
using namespace std;

void input(int *arr,int size){
cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;    
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
void print(int *arr,int size){
    cout<<"ARRAY ELEMENTS "<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
int sum(int *arr,int *arr1,int size,int size1){
    int result=0;
    for(int i=0;i<size;i++){
        result+=arr[i];
    }
    for(int i=0;i<size1;i++)
   {
    result+=arr1[i];
   }
   return result;
}

int main(){
int size;
int size1;
cout<<"ENTER THE SIZE OF AN ARRAY 1 "<<endl;
cin>>size;
int arr[size];
input(arr,size);
print(arr,size);
cout<<"ENTER THE SIZE OF AN ARRAY 2 "<<endl;
cin>>size1;
int arr1[size1];
input(arr1,size1);
print(arr1,size1);

cout<<"SUM OF TWO ARRAY IS "<<endl;
cout<<sum(arr,arr1,size,size1)<<endl;
    return 0;
}