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

bool ifArraySorted(int *arr,int size)
{
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"ENER THE ELEMENTS :- "<<endl;
    inputArr(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENTS :- "<<endl;
    printArr(arr,size);
    cout<<endl;
    if(ifArraySorted(arr,size))
    {
        cout<<"ARRAY IS SORTED "<<endl;
    }
    else{
        cout<<"ARRAY IS NOT SORTED "<<endl;
    }
    cout<<endl;
    return 0;
}