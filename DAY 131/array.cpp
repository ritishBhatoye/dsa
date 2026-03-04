#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" ";
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


bool linearSearch(int* arr,int size,int k)
{
    if(size==0)
    {
        return false;
    }

    else if(arr[0]==k) return true;

    else
    {
        return linearSearch(arr+1,size-1,k);
    }

}

void bubbleSort(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {

        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

void selectionSort(int* arr,int size)
{

    for(int i=0;i<size;i++)
    {
        int minI=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[minI]>arr[j])
            {
                minI=j;
            }
        }
        swap(arr[minI],arr[i]);
    }

}

void selectionSortRec(int* arr, int size)
{
    if(size == 0 || size == 1)
        return;

    int minI = 0;

    for(int i = 1; i < size; i++)
    {
        if(arr[minI] < arr[i])
        {
            minI = i;
        }
    }

    swap(arr[minI], arr[size-1]);
    selectionSortRec(arr, size-1);
}

void bubbleSortRec(int* arr,int size)
{
    if(size==0 || size==1)
        return ;

    for(int i=0;i<size;i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSortRec(arr,size-1);
}



int main()
{
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    cout<<endl<<endl;
    int* arr=new int[size];

    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    selectionSortRec(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    // int k;
    // cout<<"Enter the element you want to search :- ";
    // cin>>k;

    // if(linearSearch(arr,size,k))
    // {
    //     cout<<"Element "<<k<<"is present in the array"<<endl;
    // }
    // else
    // {
    //     cout<<"Element "<<k<<" is NOT preset in the array"<<endl;
    // }
    
    // int k;
    // cout<<"Enter the value for K :- ";
    // cin>>k;
    // // int result=binarySearch(arr,size,k);
    // int result =bsRec(arr,0,size-1,k);
    // if(result==-1)
    // {
    //     cout<<k<<" is NOT present in the array "<<endl;
    // }
    // else
    // {
    //     cout<<k<<" is present in the ARRAY at "<<result<<endl;
    // }

    // if(isSort(arr,size))
    // {
    //     cout<<"Array is sorted "<<endl;
    // }
    // else
    // {
    //     cout<<"Array is not sorted "<<endl;
    // }
    cout<<endl<<endl;
    cout<<endl<<endl;
    // int ans = sumOptimized(arr,size);
    cout<<endl<<endl;
    // cout<<"Ans :- "<<ans<<endl;
    cout<<endl<<endl;

    return 0;
}