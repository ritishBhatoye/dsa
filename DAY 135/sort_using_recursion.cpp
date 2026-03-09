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
//target the index of largest  element then swap it 
void selectionSort(int* arr,int n)
{
    if(n==0 || n==1)
        return ;

    int k=0;
    for(int i=1;i<n;i++)
    {
        if(arr[k]<arr[i])
        {
            k=i;
        }
       
    }
    swap(arr[k],arr[n-1]);
    selectionSort(arr,n-1);
}

//bubble sort
//simple check the adjacent elements if they are not in the correct order replace them this is not good approach 
void bubbleSort(int* arr,int size)
{
    if()
}
void merge(int s,int e,int* arr)
{
    int mid = s +(e-s)/2;
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

    int i=0,j=0;

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
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    printArr(arr,size);

    cout<<endl<<endl;
    selectionSort(arr,size);
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}