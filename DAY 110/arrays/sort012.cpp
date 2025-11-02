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

void sort012(vector<int>& arr,int size)
{
    int low = 0;
    int mid = 0; 
    int high = arr.size()-1;

    while(low < high)
    {
        if(arr[low] )
    }


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
