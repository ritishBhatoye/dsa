#include<iostream>
using namespace std;

void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element at "<<i<<" : ";
        cin>>arr[i];
    }
}
void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void rotateArrayLefyByOne(int* arr,int size)
{
    int last=arr[0];
    for(int i=1;i<size;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[size-1]=last;
    printArr(arr,size);
}

int  main()
{

    int size;
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY : ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"AFTER Rotating Array Left By One : ";
    rotateArrayLefyByOne(arr,size);
     

    cout<<endl;
    cout<<endl;

    return 0;
}