#include<iostream>
#include "arrayUtils.h" 
using namespace std;



int linearSearch(int* arr,int size,int k){
    for(int i=0;i<size;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}


int main()
{
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
    cout<<endl<<endl;
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    int ans=linearSearch(arr,size,k);
    cout<<endl<<endl;
    cout<<"Element is present at : "<<ans;
    cout<<endl<<endl;

    return 0;
}