#include<iostream>
#include <utility> 

using namespace std;

 void inputArr(int* arr,int size)
 {
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element of an array at  "<<i<<" :- ";
        cin>>arr[i];
    }
 }

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int search_in_rotated_sorted_array(int*arr,int size,int k)
{
    int s=0;
    int e=size-1;

    if(size==1)
    {
        return arr[size-1];
    }

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k)
        {
            return mid;
        }

        if(arr[s]==arr[mid] && arr[mid]==arr[e])
        {
            s++;
            e--;
            continue;
        }

        

        if(arr[s]<=arr[mid])
        {
            if(arr[s]<=k && k<=arr[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else
        {
            if(arr[mid]<=k && k<=arr[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        
    }
    return -1;
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
    cout<<"Enter the element you want to search :- ";
    cin>>k;

    cout<<endl<<endl;
    int ans=search_in_rotated_sorted_array(arr,size,k);
    if(ans!=-1)
    {
        cout<<"Element "<<k<<" is present at :- "<<ans<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is not present "<<endl;
    }
    cout<<endl<<endl;

    cout<<endl;

    return 0;
}