#include<iostream>
using namespace std;

void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element at "<<i<<" : ";
        cin>>arr[i];
    }
}
void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int uniqueElement(int* arr,int size){
    int ans=0;
    for(int i=0;i<size;i++){
ans=ans^arr[i];
    }
    return ans;
}

int  main()
{

    int size;
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY : ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    int result=uniqueElement(arr,size);
    cout<<"UNIQUE ELEMENT "<<result<<endl;
   
    cout<<endl;
    cout<<endl;

    return 0;
}