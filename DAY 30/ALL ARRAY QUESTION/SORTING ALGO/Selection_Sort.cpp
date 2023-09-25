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
void SelectionSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        int minI=i;
        for(int j=i+1;j<size;j++){
            if(arr[minI]>arr[j]){
                minI=j;
            }
        }
        swap(arr[minI],arr[i]);
    }
}
int main(){
    return 0;
}