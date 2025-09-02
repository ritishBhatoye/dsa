#include<iostream>
#include <utility> 

using namespace std;

 void inputArr(int* arr,int size)
 {
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element of an array at "<<i<<" ";
        cin>>arr[i];
    }
 }

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int first_occ(int* arr,int size,int k)
{
    int ans=-1;

    int s=0;
    int e=size-1;


    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k)
        {
            e=mid-1;
            ans=mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
int last_occ(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k)
        {
            s=mid+1;
            ans=mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

pair<int,int> first_and_last_occ(int* arr,int size,int k)
{
    pair<int,int> ans;
    ans.first=first_occ(arr,size,k);
    ans.second=last_occ(arr,size,k);

    return ans;
}

int main(){
    cout<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl;
    int* arr=new int[size];
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
  

    cout<<endl<<endl;
    int k;
    cout<<"Enter the Elment for which you want to search INDEX :- ";
    cin>>k;
    cout<<endl<<endl;
    
    pair<int,int> ans=first_and_last_occ(arr,size,k);
    cout<<"First Occurence :- "<<ans.first;
    cout<<endl<<endl;
    cout<<"Second Occurence :- "<<ans.second;
    

    cout<<endl<<endl;

    cout<<endl;

    return 0;
}