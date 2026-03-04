// Time complexity becomes O(log n) when:
// The input size reduces exponentially
// We eliminate half (or constant fraction) each step
// Example: Binary Search, Balanced BST, Heap operations

#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
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

void merge(int* arr,int s,int e)
{
    int mid=(s+e)/2;
    // copying 
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int k=s;
    int* first=new int[l1];
    int* second=new int[l2];

    for(int i=0;i<l1;i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;

    for(int i=0;i<l2;i++)
    {
        second[i]=arr[k++];
    }

    int index1=0;
    int index2=0;
    int mainIndex=s;

    while(index1 < l1 && index2 < l2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainIndex++]=first[index1++];

        }
        else
        {
            arr[mainIndex++]=second[index2++];
        }
    }
    while(index1 < l1)
    {
        arr[mainIndex++]=first[index1++];
    }
    while(index2 < l2)
    {
        arr[mainIndex++]=second[index2++];
    }

}

void mergeSort(int* arr,int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int mid=(s+e)/2;
    //sorting left part
    mergeSort(arr,s,mid);
    //sorting right part
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}



int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;

    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    cout<<endl<<endl;

    inputArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
  

    printArr(arr,size);

    cout<<endl<<endl;
    mergeSort(arr,0,size-1);
    cout<<endl<<endl;
    cout<<"After sorting :- ";
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}