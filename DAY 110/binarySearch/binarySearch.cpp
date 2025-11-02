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

int binartSearch(vector<int>& arr,int k)
{
    int s=0;
    int e=arr.size()-1;

    while(s<e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k)
        {
            return mid;
            break;
        }
        else if(arr[mid] < k)
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
    int k;
    cout<<"Enter the value of the K you want to search :- "<<endl;
    cin>>k;
    int ans=binartSearch(arr,k);
    
    cout<<endl<<endl;
    if(ans==-1)
    {
        cout<<"Element "<<k<<" is not present "<<endl;
    }
    else
    {
        cout<<"Eelement "<<k<<" is present at "<<ans<<endl;
    }

    cout<<endl<<endl;
    return 0;
}
