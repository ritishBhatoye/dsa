#include<iostream>
using namespace std;

bool Bs(int *arr,int s,int e,int x){
    int mid=(s+e)/2;
    if(s>e)
    {
        return false;
    }
    if(arr[mid]==x)
    {
          return true;
    }
    else
    {
        if(arr[mid]>x){
            return Bs(arr,s,mid-1,x);
        }
        else if(arr[mid]<x){
            return Bs(arr,mid+1,e,x);
        }
    }
}

void inputArr(int *arr,int size){
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"ENTER ELEMENT IN AN ARRAY "<<endl;
    inputArr(arr,size);
    cout<<"ENTERED ELEMENT IN AN ARRAY "<<endl;
    printArr(arr,size);
    int x;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH "<<endl;
    cin>>x;
    if(Bs(arr,0,size-1,x)){
        cout<<"ELEMENT "<<x<<" IS PRESENT "<<endl;
    }
    else{
        cout<<"ELEMENT "<<x<<" IS NOT PRESENT "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}