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

void reverseAnArr(int s,int e,int *arr)
{

    while(s<e)
    {
        swap(arr[s++],arr[e--]);
    }
}

void rotateLeftByK(int* arr,int size,int k)
{
    reverseAnArr(0,k-1,arr);
    reverseAnArr(k,size-1,arr);

    reverseAnArr(0,size-1,arr);
    
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
    int k;
    cout<<"Enter the Number of place :- ";
    cin>>k;
    cout<<"After rotating :- "<<endl;
    rotateLeftByK(arr,size,k);
    printArr(arr,size);

    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}