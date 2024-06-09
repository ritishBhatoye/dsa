#include<iostream>
using namespace std;

void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


void moveLeftByOnePlace(int *arr,int size){
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    printArr(arr,size);

}

int main()
{
    int size;
    int *arr=new int[size];
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY ";
    cin>>size;

    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"AFTER ROTATING IT LEFT BY ONE PLACE :- ";
    moveLeftByOnePlace(arr,size);
    return 0;
}