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


int binarySearch(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;
    

    while(s<=e)
    {
        int mid=s+(e-s)/2;

       if(arr[mid]==k)
       {
        return mid;
       }
       else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
    }

    return -1;
}

int bsRec(int *arr,int s,int e,int k)
{
    int mid=s+(e-s)/2;

    if(arr[mid]==k)
    {
        return mid;
    }

    else if(arr[mid]<k)
    {
        return bsRec(arr,mid+1,e,k);
    }
    else
    {
       return bsRec(arr,s,mid-1,k);
    }
    

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
    int k;
    cout<<"Enter the value for K :- ";
    cin>>k;
    // int result=binarySearch(arr,size,k);
    int result =bsRec(arr,0,size-1,k);
    if(result==-1)
    {
        cout<<k<<" is NOT present in the array "<<endl;
    }
    else
    {
        cout<<k<<" is present in the ARRAY at "<<result<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}