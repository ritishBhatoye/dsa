#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int *Union(int* arr1,int* arr2,int s1, int s2)
{
    int size=s1+s2;
    int *ans=new int[size];
    for(int i=0;i<s1;i++)
    {
        if(arr1[i]==arr2[i])
        {

             
             
        }
    }
}


int main()
{
    return 0;
}