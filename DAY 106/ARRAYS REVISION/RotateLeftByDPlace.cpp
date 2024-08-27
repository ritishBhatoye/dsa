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
void reverseArray(int* arr,int s,int e)
{
    // int s=0;
    // int e=size-1;

    while(s<=e)
    {
        swap(arr[s++],arr[e--]);
    }

}
void rotateLeftByDPlace(int* arr,int size,int k)
{
    reverseArray(arr,0,size-k-1);
    reverseArray(arr,size-k,size-1);
    reverseArray(arr,0,size-1);
    
}

int main()
{
    cout<<endl<<endl;
    int size;
    cout<<"SIZE :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    rotateLeftByDPlace(arr,size,3);
    printArr(arr,size);
    cout<<endl<<endl;

    
    return 0;
}