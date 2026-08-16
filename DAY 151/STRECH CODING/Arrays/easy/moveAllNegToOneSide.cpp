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
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            j=i;
            break;
        }
    }

    for(int i=0;i<size;i++)
    {
      if(arr)
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
