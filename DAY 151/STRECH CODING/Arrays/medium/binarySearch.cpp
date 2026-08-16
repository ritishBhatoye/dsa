#include<iostream>
using namespace std;

bool binarySearch(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

    while(s<=e)
    {
        int mid = s+(e-s)/2;

        if(arr[mid]==k)
        {
            return true;
        }

        else if(arr[mid] < k)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return false;
}
int main()
{
    cout<<endl<<endl;
    int arr[5]={5,10,20,40,120};
    cout<<endl<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    if(binarySearch(arr,size,k))
    {
        cout<<"Element "<<k<<" is present"<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is NOT present"<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    return 0;
}
