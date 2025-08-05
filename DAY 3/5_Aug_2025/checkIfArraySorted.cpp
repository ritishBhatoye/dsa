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

bool checkArraySorted(int* arr,int size){
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
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
    if(checkArraySorted(arr,size)){
        cout<<"Array is sorted "<<endl;
    }
else{
    cout<<"Array is NOT sorted "<<endl;

}

    cout<<endl;
    cout<<endl;

    return 0;
}