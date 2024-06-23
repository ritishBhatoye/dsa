#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool checkIfArraySorted(int *arr,int size)
{
for(int i=1;i<size;i++)
{
    if(arr[i-1]>arr[i]){
        return false;
        break;
    }
}
return true;
}

int main()
{
    int size;
    int *arr=new int[size];
    cout<<"ENTER THE SIZE OF THE ARRAY ";
    cin>>size;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    if(checkIfArraySorted(arr,size)){
        cout<<"ARRAY IS SORTED "<<endl;
    }
    else{
        cout<<"ARRAY IS NOT SORTED "<<endl;
    }
    cout<<endl;
    return 0;
}