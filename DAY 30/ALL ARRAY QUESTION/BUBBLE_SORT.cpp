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

void Bubble_Sort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
           }
        }
    }
    print(arr,size);
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    input(arr,size);
    Bubble_Sort(arr,size);
    return 0;
}