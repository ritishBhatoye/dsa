#include<iostream>
using namespace std;

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void moveAllNegToOneSide(int* arr,int size)
{
    int s=0;
    int e=size-1;

    while(s<=e)
    {
       if(arr[s]<0 && arr[e]>=0)
       {
        swap(arr[s++],arr[e--]);
       }
       else
       {
        s++;
        e--;
       }
    }
}

int main()
{
    int arr[8]={ 1, -1, 3, 2, -7, -5, 11, 6 };
    cout<<endl<<endl;
    int size =  sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size);
    cout<<endl<<endl;
    moveAllNegToOneSide(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
