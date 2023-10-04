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

int peakEleRECURSION(int *arr,int s,int e){
    int mid=(s+e)/2;
    //base case
    if(s>e){
        return mid;
    }
    ///recursive call
    if(arr[mid]>arr[0]){
        return peakEleRECURSION(arr,mid+1,e);
    }
    if(arr[mid]<arr[0]){
        return peakEleRECURSION(arr,s,mid);
    }
    mid=(s+e)/2;
}
int PeakElement(int *arr,int s,int e){
    int mid=(s+e);
while(s<e)
   {
    if(arr[mid]>arr[0]){
        s=mid+1;
        return mid;
    }
    else{
     e=mid;
    }
    mid=(s+e)/2;
    }
}

int main(){
   int size;
   cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
   cin>>size;
   int *arr;
   arr=new int[size];
   cout<<endl<<endl;
   input(arr,size);
   cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
   cout<<endl;
   print(arr,size);
   cout<<endl;
   int x=peakEleRECURSION(arr,0,size-1);
   cout<<"PEAK ELEMENT "<<arr[x]<<" IS PRESENT AT "<<x<<endl;
    return 0;
}
