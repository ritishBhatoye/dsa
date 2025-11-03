#include<iostream>
#include<vector>
using namespace std;

void inputArr(vector<int> &arr,int size)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }

}

void printArr(vector<int> &arr,int size)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}


int findMin(vector<int>& arr)
{
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    
    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[s] < arr[mid])
        {
            ans=arr[s];
            s=mid+1;
        }
        else
        {
         
            e=mid-1;
        }
    }

    return ans;
}


int main(){

    int size;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    vector<int> arr(size);
    inputArr(arr,size);
    printArr(arr,size);
    cout<<endl<<endl;
    // cout<<"Enter the element for which you want to find Position :- ";
    // int k;
    // cin>>k;
    int ans=findMin(arr);
    cout<<"Minimum element :- "<<ans<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}