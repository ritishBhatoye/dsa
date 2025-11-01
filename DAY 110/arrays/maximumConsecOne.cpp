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

int maximumConsecOne(vector<int>& arr)
{
    int cnt=0;
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
        {
            cnt=0;
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
    vector<int>arr(size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int ans=maximumConsecOne(arr);
    
    cout<<endl<<endl;
    cout<<"Maximum Consective One :- "<<ans<<endl;
    cout<<endl<<endl;
    return 0;
}
