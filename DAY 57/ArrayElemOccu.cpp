#include<iostream>
using namespace std;

void SortArr(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}
int firstOccu(int *arr,int s,int e,int x)
{
int mid=(s+e)/2;
int ans;
while(s<=e){
    ans=mid;
    if(arr[mid]==x){
    e=mid-1;
     }
else if(arr[mid]>x)
{
e=mid-1;
}
else if(arr[mid]<x){
    s=mid+1;
}
mid=(s+e)/2;
}
return ans;
}
int lastOcc(int *arr,int s,int e,int x){
     int mid=(s+e)/2;
     int ans;
     while(s<=e)
     {
     if(arr[mid]==x){
        ans=mid;

        s=mid+1;
     }
     else if(arr[mid]>x){
        e=mid-1;
     }
     else if(arr[mid]<x)
     {
      s=mid+1;
     }
    mid=(s+e)/2;
    }
     return ans;
    }
int main(){
    cout<<endl<<endl;
    int size;
    cin>>size;
    int *arr;
    arr=new int[size];
    cout<<endl<<endl;
    cout<<"ENTER THE ELEMENTS IN AN ARRAY : "<<endl;
    inputArr(arr,size);
    SortArr(arr,size); 
    printArr(arr,size);
    int t;
    cout<<"ENTER THE TARGET ELEMENT "<<endl;
    cin>>t;
    cout<<"FIRST OCCURENCE IS : "<<firstOccu(arr,0,size-1,t)<<endl;
    cout<<"LAST OCCURENCE IS  : "<<lastOcc(arr,0,size-1,t)<<endl;
    int total=(lastOcc(arr,0,size-1,t)-firstOccu(arr,0,size-1,t)) +1; 
    cout<<"TOTAL OCCURENCE IS : "<<total<<endl;
    delete[] arr;

    cout<<endl<<endl;

    return 0;
}