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

int search_insert_position(int *arr,int size,int k)
{
    int s=0;
    int e=size-1;
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
    
    int ans=search_insert_position(arr,size,k);
    if(ans!=-1)
    {
        cout<<"Element "<<k<<" can be at  "<<ans;
    }
    else{
        cout<<"Element "<<k<<" is not present "<<endl;
        
    }
    cout<<endl<<endl;



    cout<<endl;

    return 0;
}