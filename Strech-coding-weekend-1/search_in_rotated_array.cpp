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
/// brute force
int get_pivot(int* arr,int s,int e)
{

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]>=0)
        {
            s=mid+1;
        }
        else {
            e=mid;
        }
    }

    return s;

}

int binary_search(int* arr,int s,int e,int k)
{
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            return mid;
            break;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }


    }
    return -1;
}


int search_in_sorted_rotated_array(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;
    int pivot=get_pivot(arr,0,size-1);
    int mid=s+(e-s)/2;
    if(arr[0]<arr[pivot] && arr[pivot]<arr[mid])
    {

       return binary_search(arr,0,mid,k);

    }
    else
    {
        return binary_search(arr,mid,size-1,k);
    }
}

int search_in_sorted_rotated_array_opt(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k){
            return mid;
            break;
        }

        else if(arr[s] <= arr[mid])
        {
            if(arr[s]< k  && k < arr[mid])
                {
                    e=mid-1;
                }
            else
                {
                    s=mid-1;
                }
        }
        else 
        {
          
                if(arr[mid]<k && k <  arr[e])
                {
                    s=mid + 1;
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
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array Array :- ";
    cin>>size;
cout<<endl;
int* arr=new int[size];
int k;
cout<<"Enter the element you want to search ";
cin>>k;
inputArr(arr,size);
cout<<endl;

printArr(arr,size);
cout<<endl;
cout<<"Element "<<k<<" is Present at :"<<search_in_sorted_rotated_array_opt(arr,size,k);

cout<<endl<<endl;
   

cout<<endl;

    cout<<endl<<endl;


    return 0;
}