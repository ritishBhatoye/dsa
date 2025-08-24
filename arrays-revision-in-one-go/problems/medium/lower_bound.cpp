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

int lower_bound(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

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
            //move right
            

            s=mid+1;
        }

    }
    return ans;
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

int ans=lower_bound(arr,size,k);

cout<<"Lower Bound of "<<k<<" : "<<ans;

   

cout<<endl;

    cout<<endl<<endl;


    return 0;
}