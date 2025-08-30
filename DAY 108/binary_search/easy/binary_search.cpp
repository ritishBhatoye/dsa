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

bool isPresent(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            return true;
            break;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return false;
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
    cout<<"Enter the element you want to search :- ";

    cin>>k;

    if(isPresent(arr,size,k))
    {
        cout<<k<<" is present in the array "<<endl;
    }
    else
    {
        cout<<k<<" is NOT present in the array "<<endl;

    }
    cout<<endl<<endl;

    return 0;
}