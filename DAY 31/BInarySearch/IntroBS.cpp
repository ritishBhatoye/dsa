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

int Bs(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==x){
          return mid;
        }
        if(arr[mid]>x){
            e=mid-1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
    mid=(e+s)/2;
    }
    return mid;
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
    if(Bs(arr,size,x)==-1){
        cout<<x<<" IS NOT PRESENT "<<endl;
    }
    else{
        cout<<x<<" IS PRESENT AT "<<Bs(arr,size,x)<<endl;
    }

    return 0;
}