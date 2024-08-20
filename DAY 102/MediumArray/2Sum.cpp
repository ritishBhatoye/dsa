#include<iostream>
#include <algorithm>
using namespace std;

void inputArr(int* arr,int size)
{
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool TwoSum(int* arr,int size,int x)
{

    // sort(arr.begin(),arr.end());

    int left=0;
    int right=size-1;
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==x)
        {
            return true;
        }
        else if(sum<x){
            left++;
        }
        else{
            right--;
        }
    }
    return false;
}


int main()
{   
    int size;
    int *arr=new int[size];
    cout<<"ENTER THE SIZE OF THE ARRAY ";
    cin>>size;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    int t;
    cout<<"ENTER THE TARGET ELEMENT :- ";
    cin>>t;
    if(TwoSum(arr,size,t))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    printArr(arr,size);
    cout<<endl;
    return 0;
}