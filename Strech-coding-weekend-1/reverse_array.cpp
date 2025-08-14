#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" ";
    cin>>arr[i];
    }
}

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reverseArr(int* arr,int size)
{
    int s=0;
    int e=size-1;

    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
    

    printArr(arr,size);
}

int main(){

    int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<"After reversing an array "<<endl;
    reverseArr(arr,size);
    cout<<endl<<endl;

    return 0;
}