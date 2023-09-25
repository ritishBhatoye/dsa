#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int duplicate(int *arr,int size){
    int i=0;
    int j=i+1;
    int ans=arr[0];
    while(i<size){
        if(arr[i]==arr[j]){
        ans=arr[i];
        }
        i++;
        j++;
    }
return ans;
} 
int main(){
int size;
cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
cin>>size;
int arr[size];
input(arr,size);
cout<<"DUPLICATE ELEMENT IS "<<duplicate(arr,size)<<endl;
return 0;
}