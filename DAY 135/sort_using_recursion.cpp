#include<iostream>
using namespace std;

void inputArr(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at "<<i<<" :- ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
//selection sort
void selectionSort(int* arr,int n)
{
    if(n==0)
        return ;

    int k=arr[0];
    for(int i=1;i<n;i++)
    {
        if(k>)
    }
}
void merge(int s,int e,int* arr)
{
    int l1 =  mid - s + 1; 
    int l2 =  e - mid;
    

    int* first = new int[l1];
    int* second = new int[l2];

    int k=s;

    for(int i=0;i<l1;i++)
    {
        first[i]=arr[k++];
    }
    
    for(int i=0;i<l2;i++)
    {
        second[i]=arr[k++];
    }

    int mainIndex = s;

    int i=0,k=0;

    while(i<l1 && j<l2)
    {
        if(first[i] < second[j])
        {
            arr[mainIndex++]=first[i++];
        }

        else
        {
            arr[mainIndex++]=second[j++];
        }
    }

    while(i<l1)
    {
        arr[mainIndex] = first[i++];
    }
    while(j<l2)
    {
        arr[mainIndex] = second[j++];

    }



}

void mergeSort(int s,int e,int* arr)
{
    if(s>e)
        return ;

    int mid = s + (e-s)/2; 
    
    //sorting the left portion
    mergeSort(0,mid-1,arr);

    //sorting the right portion
    mergeSort(mid,e,arr);

    merge(s,e,arr);
}

int main()
{
    return 0;
}