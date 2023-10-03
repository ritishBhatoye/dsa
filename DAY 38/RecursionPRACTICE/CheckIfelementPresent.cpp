#include<iostream>
using namespace std;

bool checkIfElementInAnArray(int *arr,int size,int x){
    //base case
    if(arr[0]==x || arr[1]==x){
        return true;
    }
     if(arr[0]!=x || arr[1]!=x){
        return false;
    }
    else{
    //recursive call
    return checkIfElementInAnArray(arr+1,size-1,x);
    }
}
//USING BINARY SEARCH 
int checkIfEleInAnArrayUsingBinarySearch(int *arr,int s,int e,int x){
    int mid=(s+e)/2;
    //BASE CASE
    if(s>e){
        return -1;
    }
    if(arr[mid]==x){
        return mid;
    }
    else{
    if(arr[mid]>x){
        //MOVE TO LEFT PART
        return checkIfEleInAnArrayUsingBinarySearch(arr,s,mid-1,x);
    }
    if(arr[mid]<x){
        //MOVE TO RIGHT PART
        return checkIfEleInAnArrayUsingBinarySearch(arr,mid+1,e,x);
    }
    mid=(s+e)/2;
    }
}

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
int main(){
int *arr;
int size;
cout<<endl<<endl;
cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
cin>>size;
arr=new int[size];
cout<<endl<<endl;
input(arr,size);
cout<<endl;
print(arr,size);
int x;
cout<<endl;
cout<<"ENTER THE ELEMENT YOU WANT TO INSERT "<<endl;
cin>>x;

cout<<endl<<endl;
if(checkIfEleInAnArrayUsingBinarySearch(arr,0,size-1,x)!=-1){
    cout<<x<<" IS PRESENT IN AN ARRAY AT "<<checkIfEleInAnArrayUsingBinarySearch(arr,0,size-1,x)<<endl;
}
else{
    cout<<x<<" IS NOT PRESENT IN AN ARRAY  "<<endl;
}
    return 0;
}