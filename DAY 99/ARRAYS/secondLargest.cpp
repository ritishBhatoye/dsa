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
    cout<<endl;
}

int secondLargest(int *arr,int size){
    int largest=arr[0];
    int sLargest=-1;
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i] < largest && arr[i]>sLargest){
            sLargest=arr[i];
        }
    
    }
    return sLargest;
}

int main()
{
    int size;
    int *arr=new int[size];
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"SECOND LARGEST :- "<<secondLargest(arr,size)<<endl;
    return 0;
}