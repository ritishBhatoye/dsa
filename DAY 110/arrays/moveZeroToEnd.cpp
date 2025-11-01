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
        cout<<"Enter the element at "<<i<<"  :- ";
        cin>>arr[i];
    }
}


int main()
{
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cint>>size;

    int *arr=new int[size];
    cout<<"Enter the element in the array :- ";
    
    inputArr(arr,size);
    printArr(arr,size);
    
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}