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

int PivotElement(int *arr,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
         s=mid+1; 
        }
        else{
         e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int Bs(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==x){
           return mid;
        }
        if(arr[mid]<x){
         e=mid-1;
        }
        if(arr[mid]>x){
           s=mid+1;
        }
    mid=s+(e-s)/2;
    }
    return -1;
}
int BsOnRotNSortArr(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int pivot=PivotElement(arr,size);
    while(s<e){
        if(arr[pivot]<=x<=arr[size-1]){
              return Bs(arr,size,x);
        }
        else {
              return Bs(arr,size,x);
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    cout<<"ELEMENT "<<x<<" IS PRESENT AT "<<BsOnRotNSortArr(arr,size,x)<<endl;
    return 0;
}