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
void selection_sort(int *arr,int size){
   
    for(int i=0;i<size;i++){
         int min=i;
        for(int j=i;j<size;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
            swap(arr[min],arr[i]);
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
    selection_sort(arr,size);
    return 0;
}