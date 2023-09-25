//
#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
   for(int i=0;i<size;i++){ cout<<arr[i]<<" ";}
}
int position(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int ans=0;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
         if(arr[mid]<x){
            s=mid+1;

        }
        else {
            e=mid-1;
        }
        mid=(s+e)/2;
       }
    return -1;
}
bool binarySearch(int *arr,int size,int x){
    int s=0;
    int ans=0;
    int e=size-1;
    int position=0;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==x){
           return true;
        }
       if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;

    }
    return false;

}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    print(arr,size);
    int x;
    cout<<endl;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH :- "<<endl;
    cin>>x;
    if(binarySearch(arr,size,x)){
        cout<<x<<" IS PRESENT IN AN ARRAY AT "<<position(arr,size,x)<<endl;
    }
    else{
        cout<<x<<" IS PRESENT IN AN ARRAY "<<endl;
    }

    return 0;
}