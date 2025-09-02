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

int binary_search(int* arr,int size,int k)
{
    int ans=-1;
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
        else if(arr[mid]>k)
        {
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
    cout<<"Enter the Elment you want to search :- ";
    cin>>k;
    cout<<endl<<endl;
    
    int ans=binary_search(arr,size,k);
    if(ans!=-1)
    {
        cout<<"Element "<<k<<" is at  "<<ans;
    }
    else{
        cout<<"Element "<<k<<" is not presemt "<<endl;
        
    }
    cout<<endl<<endl;



    cout<<endl;

    return 0;
}