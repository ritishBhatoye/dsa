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

bool isSort(int* arr,int size)
{
    if(size==0 || size==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }

    else
    {
        bool ans = isSort(arr+1,size-1);

        return ans;

    }

}

int sum(int* arr,int size,int s)
{
    if(size==0)
    {
        return s;
    }

    return sum(arr+1,size-1,s+arr[0]);


}

int sumOptimized(int* arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    int prev=sumOptimized(arr+1,size-1);

    int result=arr[0] + prev;

    return result;
}

bool linearSearch(int* arr,int size)
{
    
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

    if(isSort(arr,size))
    {
        cout<<"Array is sorted "<<endl;
    }
    else
    {
        cout<<"Array is not sorted "<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    int ans = sumOptimized(arr,size);
    cout<<endl<<endl;
    cout<<"Ans :- "<<ans<<endl;
    cout<<endl<<endl;

    return 0;
}