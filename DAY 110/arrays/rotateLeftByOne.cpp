#include<iostream>
using namespace std;

void printArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void inputArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

void rotateLeftByOne(int *arr,int size)
{
    int last=arr[0];

    for(int i=1;i<size;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[size-1]=last;
}
int main()
{
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    int *arr=new int[size];
    inputArr(arr,size);
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<"After rotating :- "<<endl;
    rotateLeftByOne(arr,size);
    printArr(arr,size);

    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}