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

void moveZeroToEnd(int *arr,int size)
{
   int i=0;
   int j=size-1;

   while(i<j)
   {
    if(arr[i]==0 && arr[j]!=0)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    else if(arr[j]==0 )
    {
        j--;
    }
    else if(arr[i]!=0)
    {
        i++;
    }
   }
}

int main()
{
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;

    int *arr=new int[size];
    cout<<"Enter the element in the array :- ";

    inputArr(arr,size);
    printArr(arr,size);
    cout<<"After moving zeros to end :- "<<endl;
    moveZeroToEnd(arr,size);
    printArr(arr,size);
    
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}