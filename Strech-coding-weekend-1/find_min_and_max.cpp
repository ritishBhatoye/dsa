#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" : ";
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

pair<int> find_min_and_max(int* arr,int size)
{
    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    pair<int> ans;
    ans.first=min;
    ans.second=max;
    return ans;
}

int main(){

    int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<"After reversing an array "<<endl;
    reverseArr(arr,size);
    cout<<endl<<endl;

    return 0;
}