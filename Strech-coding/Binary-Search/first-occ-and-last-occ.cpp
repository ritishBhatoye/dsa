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

    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k)
        { 
            e=mid-1;
            ans=mid;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
    }
return ans;
}



int binary_search(int* arr,int s,int e,int k)
{
    int ans=0;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans=mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
    }
    return ans;
}

pair<int,int> first_and_last_occ(int* arr,int size,int k) 
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int first=binary_search(arr,0,mid,k);
    int last=binary_search(arr,mid,e,k);

   
    return {first,last};
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
    int k;
    cout<<"Enter the element :- ";

    cin>>k;
    pair<int,int> result=first_and_last_occ(arr,size,k);
    cout<<endl;
    cout<<"First Occurence : "<<result.first<<"Last Occurence : "<<result.second;
    cout<<endl;

    return 0;
}