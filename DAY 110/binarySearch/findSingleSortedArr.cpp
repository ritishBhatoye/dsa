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

int findSingleElement(vector<int>& arr)
{
    
   int size=arr.size();
    

    if(arr[0]!=arr[1])
    {
        return arr[0];
      
    }
    if(arr[size-1]!=arr[size-2])
    {
        return arr[size-1];
    }

    int s=1;
    int e=size-2;


    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid-1]!=arr[mid]  && arr[mid]!=arr[mid+1])
        {
            return arr[mid];
        }
        if((mid%2==0 && arr[mid+1]==arr[mid]) || ((mid%2==1 && arr[mid-1]==arr[mid])))
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

    int ans=findSingleElement(arr);
    
    cout<<"Single Element :- "<<ans<<endl; 

    cout<<endl<<endl;
    return 0;
}
