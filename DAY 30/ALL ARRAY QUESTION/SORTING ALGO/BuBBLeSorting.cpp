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


void bubbleSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
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
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    bubbleSort(arr,size);
    return 0;
}