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
int pivotElement(int *arr,int s,int e){
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid-1]<arr[mid]&& arr[mid]<<arr[mid+1]){
            return mid;
        }
        
    }
}
int main(){
    int 
    return 0;
}