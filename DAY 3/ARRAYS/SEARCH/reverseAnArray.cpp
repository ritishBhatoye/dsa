#include<iostream>
using namespace std;

void reverseAnArray(int arr[],int size)
{
    int s=0;
    int e=size-1;

    while(s<e)
    {
      swap(arr[s++],arr[e--]);
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[6]={1,3,10,20,50,100};

    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"AFTER REVERSING ARRAY : "<<endl;


    reverseAnArray(arr,size);
    print(arr,size);

    return 0;
}