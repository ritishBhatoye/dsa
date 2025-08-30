#include<iostream>
using namespace std;

void print_arr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void input_arr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

int search_insert_position(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;
    int ans=-1;
    ///edge case
    if(arr[e]<k)
    {
        return size;
    }

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]>=k)
        {
            ans=mid;
            e=mid-1;
        }
        else 
        {
            s=mid+1;
        }
    }
    return ans;
}

int main()
{
    int size;
    
    cout<<endl<<endl;
    
    cout<<"Enter the size of an array :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;

    input_arr(arr,size);
    cout<<endl<<endl;
    print_arr(arr,size);

    cout<<endl<<endl;
    int k;
    cout<<"Enter the element you for which you want to search Index :- ";

    cin>>k;

    if(search_insert_position(arr,size,k)==-1)
    {
        cout<<"Element is not present in the array "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" can be inserted at :- "<<search_insert_position(arr,size,k)<<endl;

    }
    cout<<endl<<endl;

    return 0;
}