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
int PeakElement(int *arr,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
   mid=s+(e-s)/2;
    }
return mid;
}
int main(){
    int size;
cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    int X=PeakElement(arr,size);
    cout<<"PEAK ELEMENT "<<arr[X]<<" IS AT "<<PeakElement(arr,size)<<endl;
    return 0;
}