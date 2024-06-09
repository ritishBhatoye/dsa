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
}

void reverseAnArray(int *arr,int size)
{
    int s=0;

    int e=size-1;

    while(s<e){
        swap(arr[s++],arr[e--]);
    }
    printArr(arr,size);
}

int main()
{
    int size;
    int *arr=new int[size];
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY ";
    cin>>size;
    cout<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    cout<<"ENTERRED ELEMENTS : - "<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"AFTER REVERSING THE ARRAY "<<endl;
    reverseAnArray(arr,size);
    return 0;
}