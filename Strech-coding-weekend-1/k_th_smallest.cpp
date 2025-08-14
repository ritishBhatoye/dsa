#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" : ";
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

void k_th_smallest(int* arr,int size)
{

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