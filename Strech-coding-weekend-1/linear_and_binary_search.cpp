#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" ";
    cin>>arr[i];
    }
}

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int linear_search(int* arr,int size,int k)
{

        for(int i=0;i<size;i++){
            if(arr[i]==k){
                return i;
            }
        }
        return -1;
}
int binary_search(int* arr,int size,int k){
    int s=0;
    int e=size-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else {
            s=mid+1;  
        }
    }
    return -1;
}
int main(){

    int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    int k;
    cout<<endl;
    cout<<"Enter the element to search :- ";
    cin>>k;
    int ls_ans=linear_search(arr,size,k);
    int bs_ans=binary_search(arr,size,k);
    cout<<"Using linear Search :- "<<ls_ans<<endl;
    cout<<"Using binary Search :- "<<bs_ans<<endl;
    
    cout<<endl<<endl;

    return 0;
}