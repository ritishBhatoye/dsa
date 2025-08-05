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

int secondLarget(int* arr,int size){
    int max=arr[0];
    int sMax=-1;

    for(int i=0;i<size;i++){
        if(arr[i]>max )
        {
            sMax=max;
            max=arr[i];
        }
        else if(arr[i]!=max && arr[i]>sMax){
            sMax=arr[i];
        }
    }
    return sMax;
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
    int result=secondLarget(arr,size);
    cout<<"SECOND LARGEST ELEMENT "<<result<<endl;
   
    cout<<endl;
    cout<<endl;

    return 0;
}