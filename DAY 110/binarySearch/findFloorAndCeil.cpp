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


int floorInArr(vector<int>& arr,int k)
{
    int s=0;
    int e=arr.size()-1;
    int ans=-1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]<=k)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}


int ceiInArr(vector<int>& arr,int k)
{
    int s=0;
    int e=arr.size()-1;
    int ans=-1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]>=k)
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
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
    cout<<"Enter the element for which you want to find the FLOOR AND CEIL :- ";
    int k;
    cin>>k;
    int floorAns=floorInArr(arr,k);
    int ceilAns=ceiInArr(arr,k);
    cout<<"Floor Ans :- "<<k<<" : "<<arr[floorAns]<<endl;
    cout<<"Ceil Ans :- "<<k<<" : "<<arr[ceilAns]<<endl;


    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}