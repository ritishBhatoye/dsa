#include<iostream>
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

void MoveLeftByOne(int *arr,int size)
{
    int Las=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }    
    arr[size-1]=Las;

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
    cout<<"AFTER MOVING IT LEFT BY ONE "<<endl;
    MoveLeftByOne(arr,size);
    printArr(arr,size);
    cout<<endl;
    return 0;
}