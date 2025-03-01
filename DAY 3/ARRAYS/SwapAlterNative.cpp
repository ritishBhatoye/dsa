#include<iostream>

using namespace std;

void swapAlterNate(int arr[],int size)
{
    for(int i=0;i<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}

void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};

    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"AFTER SWAPPING :- "<<endl;

    swapAlterNate(arr,size);
    printArr(arr,size);

    return 0;
}