#include<iostream>
using namespace std;

void inputArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at :- ";
        cin>>arr[i];
    }
}
void printArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int linearSearch(int *arr,int size,int k)
{

    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
return -1;
}

int main()
{

    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<"Enter the elements in the array "<<endl;
    inputArr(arr,size);
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    int ans=linearSearch(arr,size,k);
    cout<<endl<<endl;
    if(ans==-1)
    {
        cout<<"Element "<<k<<" does not exist "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is present at "<<ans<<endl;;
    }
    cout<<endl<<endl;

    return 0;
}