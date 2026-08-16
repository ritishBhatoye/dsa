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

    while(s<e)
    {
       if(arr[s]<0 && arr[e]>=0)
       {
        swap(arr[s++],arr[e--])
       }
       else
       {
        
       }
    }
}

int main()
{
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
