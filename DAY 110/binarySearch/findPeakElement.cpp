#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void inputArr(vector<int>& arr,int size)
{
    for(int i=0;i<size;i++)
    
    {
        cout<<"Enter the element at :- ";
        cin>>arr[i];
    }
}

void printArr(vector<int>& arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int findPeakElement(vector<int>& arr)
{
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]<=arr[mid+1])
        {
          
            s=mid+1;
        }
        else
        {
            e=mid;
        }

    }
return s;
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    vector<int>arr(size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;

    int ans=findPeakElement(arr);
    
    cout<<"Peak Element :- "<<arr[ans]<<endl; 

    cout<<endl<<endl;
    return 0;
}
