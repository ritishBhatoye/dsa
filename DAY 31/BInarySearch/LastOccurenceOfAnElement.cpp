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

int lastOccurence(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        if(arr[mid]>x){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
int size;
cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
cin>>size;
int arr[size];
input(arr,size);
int x;
cout<<"ENTER THE ELEMENT FOR WHICH YOU WANT TO SEE LAST OCCURENCE "<<endl;
cin>>x;
cout<<"LAST OCCURENCE OF AN ELEMENT "<<x<<" IS AT "<<lastOccurence(arr,size,x)<<endl;
    return 0;
}