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

void removeDup(int* arr,int size){
   int i=0;
   for(int j=1;j<size;j++){
    if(arr[j]!=arr[i])
    {
arr[i+1]=arr[j];
i++;
    }
   }
   printArr(arr,i+1);
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
    cout<<"AFTER REMOVING THE DUPLICATE ELEMENTS : ";
    removeDup(arr,size);
     

    cout<<endl;
    cout<<endl;

    return 0;
}