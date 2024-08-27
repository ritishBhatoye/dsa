#include<iostream>
using namespace std;


void inputArray(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void PrintArray(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void RotateLeftByOnePlace(int* arr,int size)
{
       int l=arr[size-1];
       arr[size-1]=arr[0];
        for(int i=1;i<size-1;i++)
    {
            arr[i-1]=arr[i];
    }

    arr[size-2]=l;
}

int main()
{
    int size;
    cout<<"ENTER THE SIZE :- ";
    cout<<endl<<endl;
    cin>>size;
    int* arr=new int[size];
    inputArray(arr,size);
    cout<<endl<<endl;
    RotateLeftByOnePlace(arr,size);
    PrintArray(arr,size);
    cout<<endl<<endl;

    return 0;
}