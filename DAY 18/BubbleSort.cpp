#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE ELEMENT IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int size){
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void BubbleSort(int arr[],int size){
    if(size==0 ||size==1){
        return ;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,size-1);
}
int main(){
    int arr[10];
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    print(arr,size);
    BubbleSort(arr,size);
    cout<<"AFTER SORTING "<<endl;
    print(arr,size);
    return 0;
}