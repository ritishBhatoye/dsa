#include<iostream>
using namespace std;

void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void moveZerosToEnd(int *arr,int size)
{
    int n=size;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            arr
        }
    }

}
int main()
{
    int size;
    int *arr=new int[size];
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- ";
    cin>>size;
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;

    return 0;
}