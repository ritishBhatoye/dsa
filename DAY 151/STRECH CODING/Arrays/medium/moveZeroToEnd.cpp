#include<iostream>
using namespace std;

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void moveZeroToEnd(int* arr,int size)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    for(int i=j+1;i<size;i++)
    {
        if(arr[i]!=0 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main()
{
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr, size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<"Moving zeros to end "<<endl;
    cout<<endl<<endl;
    moveZeroToEnd(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);

    cout<<endl<<endl;

    return 0;
}
