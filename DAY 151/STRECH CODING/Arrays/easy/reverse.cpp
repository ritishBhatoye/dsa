#include<iostream>
using namespace std;

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
    while(s<e)
    {
        swap(arr[s++],arr[e--]);
    }
}
int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    int arr[5]={10,20,30,40,50};
    cout<<endl<<endl;
    printArr(arr,5);
    cout<<endl<<endl;
    cout<<"After Reversing "<<endl;
    reverseArr(arr, 5);
    cout<<endl<<endl;
    printArr(arr,  5);

    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
