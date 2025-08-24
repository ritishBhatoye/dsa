#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


//brute force approach
int binary_search(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            return mid;
            break;
        }
        else if(arr[mid] > k)
        {
            e=mid-1;
        }
        else 
        {
            s=mid+1;
        }
    }

    return -1;
}


int main(){
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array Array :- ";
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
cout<<endl;
int ans=binary_search(arr,size,k);


if(ans!=-1)
{
    cout<<"Element "<<k<<" is present at "<<ans<<endl;
}
else
{
    cout<<"Element "<<k<<" is not PRESENT "<<endl;
    cout<<"Please enter the valid element "<<endl;
}

cout<<endl;

    cout<<endl<<endl;


    return 0;
}